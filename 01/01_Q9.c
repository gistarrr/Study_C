
#include <stdio.h>

int sumof(int a, int b);

int main(void)
{
    int a, b;

    printf("a �� : "); scanf("%d", &a);
	printf("b �� : "); scanf("%d", &b);

	printf("���� a, b ������ ��� ������ ���� %d�Դϴ�.\n", sumof(a, b));
	return 0;
}

int sumof(int a, int b)
{
    int sum=0;
    if(a<=b)
    {
        for(int i=a;i<=b;i++)
        {
            sum+=i;
        }
    }
    else
    {
        for(int i=b;i<=a;i++)
        {
            sum+=i;
        }
    }
    return sum;
}