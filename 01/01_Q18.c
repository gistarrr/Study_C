#include <stdio.h>

void nrpira (int n);


int main(void)
{
    int n;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);
    nrpira(n);

	return 0;
}

void nrpira (int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(j=1;j<=(n-i)*2+1;j++)
            printf("%d", i%10);
        putchar('\n');
    }
}
