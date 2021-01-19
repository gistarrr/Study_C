#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SWAP(x, y, t) ((t)=(x), (x)=(y), (y)=(t))
void shuffle(int a[], int n);

int main(void)
{
	int i;
	int * x;		/* �迭�� ù ��° ��ҿ� ���� ������ */
	int nx;			/* �迭 x�� ��ڼ� */

	printf("��ڼ� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));			/* ��ڼ� nx�� int �� �迭 x�� ���� */

	printf("%d ���� ������ �Է��ϼ���.\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	shuffle(x, nx); /* �迭 x�� ��� ������ ���� */

	printf("�迭 ����� ������ �����߽��ϴ�.\n");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x); /* �迭 x�� ���� */

	return 0;
}

void shuffle(int a[], int n)
{
    int i, j;
    int temp;
    srand(time(NULL));
    for(i=1;i<n;i++)
    {
        j=rand()%(i+1);
        if(i!=j)
            SWAP(a[i], a[j], temp);
    }
}