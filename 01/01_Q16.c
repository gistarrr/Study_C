#include <stdio.h>

void triangleLB (int n);
void triangleLU (int n);
void triangleRU (int n);
void triangleRB (int n);

int main(void)
{
    int n;
    printf("정수를 입력하세요: ");
    scanf("%d", &n);
    triangleLB(n);
    putchar('\n');
    triangleLU(n);
	putchar('\n');
    triangleRU(n);
    putchar('\n');
    triangleRB(n);

	return 0;
}

void triangleLB (int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
        putchar('\n');
    }
}

void triangleLU (int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
            printf("*");
        putchar('\n');
    }
}

void triangleRU (int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(j=n;j>=i;j--)
            printf("*");
        putchar('\n');
    }
}

void triangleRB (int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        putchar('\n');
    }
}
