#include <stdio.h>

int main(void)
{
    int n;
    int digit=0;

    do
    {
    printf("���� ������ �Է��ϼ���: "); scanf("%d", &n);
    }while(n<=0);

    while(n>0)
    {
        n/=10;
        digit++;
    }

    printf("�� ���� %d �ڸ��Դϴ�.\n", digit);
	
	return 0;
}
