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
    puts("�� ������ �ִ������� ���մϴ�.");
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &x);
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &y);
    printf("�ִ������� %d�Դϴ�.\n", gcd(x, y));

    return 0;
}