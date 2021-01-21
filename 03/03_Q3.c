#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int search_idx(int a[], int n, int key, int idx[])
{
    int i, cnt=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            idx[cnt++]=a[i];
        }
    }
    if(cnt==0)
        return -1;
    else    return cnt;
}
