#include <stdio.h>

int main(void)
{
    int n, num=1;
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &n);
    for(int i=1; i<=n;i++)
        num*=i;
    printf("n!�� %d�Դϴ�.", num);
    return 0;
}