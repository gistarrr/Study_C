#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int minof(const int a[], int n);
int sumof(const a[], int n);
double aveof(const int a[], int n);

int main (void)
{
    int i;
    int *height;
    int number;
    srand(time(NULL));
    number=5+rand()%16;
    height=calloc(number, sizeof(int));
    for(i=0;i<number;i++)
    {
        height[i]=100+rand()%90;
        printf("height[%d] = %d\n", i, height[i]);
    }
    printf("최솟값은 %d입니다.\n", minof(height, number));
    free(height);
    
    return 0;
}

int minof(const int a[], int n)
{
    int i, min;
    min = a[0];
    for(i=1; i<n;i++)
    {
        if(a[i]<min) min=a[i];
    }

    return min;
}

int sumof(const a[], int n)
{
    int sum=0, i;
    for(i=0;i<n;i++)
        sum+=a[i];
    return sum;
}

double aveof(const int a[], int n)
{
    int ave;
    ave=sumof(a, n)/n;
}