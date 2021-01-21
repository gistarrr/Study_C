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
    printf("bsearch �Լ��� ����Ͽ� �˻�");
    printf("��� ���� : ");
    scanf("%d", &nx);
    x=(int*)malloc(nx*sizeof(int));

    printf("������������ �Է��ϼ���.\n");
    printf("x[0] : ");
    scanf("%ld", &x[0]);
    for(i=1; i<nx;i++)
    {
        do{
            printf("x[%d] : ", i);
            scanf("%ld", &x[i]);
        }while(x[i] > x[i-1]);
    }
    printf("�˻��� : ");
    scanf("%ld", &key);
    p=bsearch(&key, x, nx, sizeof(int), (int(*)(const void *, const void *))long_cmp);
    if(p==NULL)
        printf("�˻��� �����߽��ϴ�.");
    else
        printf("%ld��(��) x[%ld]�� �ֽ��ϴ�.\n", key, (int)(p-x));
    free(x);

    return 0;


}