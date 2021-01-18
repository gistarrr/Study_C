
#include <stdio.h>

int main(void)
{
	int i, n;
	int sum; /* 합 */

	puts("1부터 n까지의 합을 구합니다.");

    printf("n의 값 : ");
	scanf("%d", &n);

	sum = 0;
	for (i = 1; i <= n; i++) 
    {	/* i = 1, 2, ..., n */
		if(i==1)
            printf("%d ", i);
        else
            printf("+ %d ", i);
        sum += i;				/* sum에 i를 더합니다. */
	}
    printf("= %d", sum);
	return 0;
}