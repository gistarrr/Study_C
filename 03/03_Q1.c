#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int search(int a[], int n, int key)
{
    int i;
    a[n]=key;
    for(i=0;i<=n;i++)
    {
        if(a[i]==key)
            break;
    }
    return i==n ? -1 : i;
}
