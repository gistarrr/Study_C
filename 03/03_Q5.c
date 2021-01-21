#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bin_search2(const int a[], int n, int key)
{
    int pl, pc, pr;
    pl=0;pr=n-1;
    while(pl<=pr)
    {
        pc=(pl+pr)/2;
        if(a[pc]==key)
            break;
        else if(a[pc]<key)
            pl=pc+1;
        else
            pr=pc-1;
    }
    if(pl>pr)
        return -1;
    else
        while(pl>pr)
        {
            pr=pc;
            if(a[--pr]==key)
                pc=pr;
        }
        return pc;
}
/*
int bin_search2(const int a[], int n, int key)
{
    int pl, pc, pr;
    pl=0;pr=n-1;
    while(pl<=pr)
    {
        pc=(pl+pr)/2;
        if(a[pc]==key)
            while(pc>pl && a[pc-1]==key)    //이미 정렬되어 있는 상태이기 때문에 pc-1이 key값과 같은지 비교
                pc--;
            return pc;
        else if(a[pc]<key)
            pl=pc+1;
        else
            pr=pc-1;
    }

    return -1;
   
}
*/