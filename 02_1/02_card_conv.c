#include <stdio.h>
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t)) 
int card_convr(unsigned x, int n, char d[])
{
    char dchar[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits=0;
    if(x==0)
    {
        d[digits++]=dchar[0];
    }
    else
    {
        while(x)
        {
            d[digits++]=dchar[x%n];
            x=x/n;
        }
    }
    return digits;
}

int main (void)
{
    unsigned num;
    int n, retry, card_num, temp;
    char d[512]={0};
    printf("10진수를 기수 변환합니다.\n");
    do{
        printf("변환하는 음이 아닌 정수 : ");
        scanf("%d", &num);
        do{
            printf("어떤 진수로 변환할까요?(2-36) : ");
            scanf("%d", &n);
        }while(n<2 || n>36);

        printf("%d진수로는 ", n);
        card_num = card_convr(num, n, d);
        for(int i=card_num-1;i>=0;i--)
            printf("%c", d[i]);
        printf("입니다.\n");
        printf("한 번 더 할까요?(1 - 예 / 0 - 아니오) : ");
        scanf("%d", &retry);
    }while(retry==1);

    return 0;
}