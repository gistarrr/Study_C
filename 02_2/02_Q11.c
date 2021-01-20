int mdays[][12] = {
    { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};

int isleap(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int dayofyear(int y, int m, int d)
{
        
    while(--m)
    {
        if(isleap(y)==0)
            d+=mdays[0][m-1];
        else
            d+=mdays[1][m-1];             // d+=mdays[isleap(y)][m-1];
        
    }
    
    return d;
}

int main(void)
{
	int year, month, day;	/* �� �� �� */
	int retry;				/* �ٽ� �� ��? */

	do {
		printf("�� : "); scanf("%d", &year);
		printf("�� : "); scanf("%d", &month);
		printf("�� : "); scanf("%d", &day);

		printf("%d���� %d ��°�Դϴ� \n", year, dayofyear(year, month, day));

		printf("�ٽ� �� �� �ұ��?(1 �� / 0 �ƴϿ�): ");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}