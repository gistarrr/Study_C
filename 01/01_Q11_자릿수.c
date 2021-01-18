#include <stdio.h>

int main(void)
{
    int n;
    int digit=0;

    do
    {
    printf("양의 정수를 입력하세요: "); scanf("%d", &n);
    }while(n<=0);

    while(n>0)
    {
        n/=10;
        digit++;
    }

    printf("이 수는 %d 자리입니다.\n", digit);
	
	return 0;
}
