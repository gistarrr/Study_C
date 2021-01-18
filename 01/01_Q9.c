
#include <stdio.h>

int sumof(int a, int b);

int main(void)
{
    int a, b;

    printf("a 값 : "); scanf("%d", &a);
	printf("b 값 : "); scanf("%d", &b);

	printf("정수 a, b 사이의 모든 정수의 합은 %d입니다.\n", sumof(a, b));
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