#include <stdio.h>

int gcd(int x, int y)
{   
    int temp;
    while(y>0)
    {        
        temp=x%y;
        x=y;
        y=temp;        
    }
    return x;
}

int main(void)
{
    int x, y;
    puts("두 정수의 최대공약수를 구합니다.");
    printf("정수를 입력하세요 : ");
    scanf("%d", &x);
    printf("정수를 입력하세요 : ");
    scanf("%d", &y);
    printf("최대공약수는 %d입니다.\n", gcd(x, y));

    return 0;
}