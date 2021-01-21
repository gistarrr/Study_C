#include <stdio.h>
#include <stdlib.h>

int long_cmp(const long *a, const long *b)
{
    if(*a<*b)
        return 1;
    else if(*a > *b)
        return -1;
    else 
        return 0;
}

int main (void)
{
    int i, nx;
    long key;
    long *x;
    int *p;
    printf("bsearch 함수를 사용하여 검색");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x=(int*)malloc(nx*sizeof(int));

    printf("내림차순으로 입력하세요.\n");
    printf("x[0] : ");
    scanf("%ld", &x[0]);
    for(i=1; i<nx;i++)
    {
        do{
            printf("x[%d] : ", i);
            scanf("%ld", &x[i]);
        }while(x[i] > x[i-1]);
    }
    printf("검색값 : ");
    scanf("%ld", &key);
    p=bsearch(&key, x, nx, sizeof(int), (int(*)(const void *, const void *))long_cmp);
    if(p==NULL)
        printf("검색에 실패했습니다.");
    else
        printf("%ld은(는) x[%ld]에 있습니다.\n", key, (int)(p-x));
    free(x);

    return 0;


}