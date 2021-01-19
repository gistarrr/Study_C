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
    printf("10������ ��� ��ȯ�մϴ�.\n");
    do{
        printf("��ȯ�ϴ� ���� �ƴ� ���� : ");
        scanf("%d", &num);
        do{
            printf("� ������ ��ȯ�ұ��?(2-36) : ");
            scanf("%d", &n);
        }while(n<2 || n>36);

        printf("%d�����δ� ", n);
        card_num = card_convr(num, n, d);
        for(int i=card_num-1;i>=0;i--)
            printf("%c", d[i]);
        printf("�Դϴ�.\n");
        printf("�� �� �� �ұ��?(1 - �� / 0 - �ƴϿ�) : ");
        scanf("%d", &retry);
    }while(retry==1);

    return 0;
}