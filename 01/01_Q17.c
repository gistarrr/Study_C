#include <stdio.h>

void spira (int n);


int main(void)
{
    int n;
    printf("단수를 입력하세요: ");
    scanf("%d", &n);
    spira(n);

	return 0;
}

void spira (int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
            printf(" ");
        for(j=1;j<=(i-1)*2+1;j++)
            printf("*");
        putchar('\n');
    }
}
