#include <stdio.h>

int main(void)
{
    int n, num=1;
    printf("정수를 입력하세요 : ");
    scanf("%d", &n);
    for(int i=1; i<=n;i++)
        num*=i;
    printf("n!은 %d입니다.", num);
    return 0;
}