
#include <stdio.h>

int main(void)
{
	int i, n;
	int sum; /* �� */

	puts("1���� n������ ���� ���մϴ�.");

    printf("n�� �� : ");
	scanf("%d", &n);

	sum = 0;
	for (i = 1; i <= n; i++) 
    {	/* i = 1, 2, ..., n */
		if(i==1)
            printf("%d ", i);
        else
            printf("+ %d ", i);
        sum += i;				/* sum�� i�� ���մϴ�. */
	}
    printf("= %d", sum);
	return 0;
}