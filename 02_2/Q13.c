typedef struct{
    int y;
    int m;
    int d;
} Date;
int mdays[][12] = {
    { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};

Date DateOf(int y, int m, int d)
{
    Date time;
    time.y=y;
    time.m=m;
    time.d=d;

    return time;
}
Date After(Date x, int n)
{
    if(n<0)
        return Before(x, -n);

    x.d+=n;

    while(x.d>mdays[isleap(x.y)][x.m-1])
    {
        x.d=x.d-mdays[isleap(x.y)][x.m-1];
        x.m++;
        if(x.m>12)
        {
            x.y++;
            x.m-=12;
        }       
    }

    return x;
}
Date Before(Date x, int n)
{
    if(n<0)
        return After(x, -n);

    x.d-=n;

    while(x.d<1)
    {
        x.d=x.d+mdays[isleap(x.y)][x.m-2];
        x.m--;
        if(x.m<1)
        {
            x.y--;
            x.m+=12;
        }       
    }

    return x;
}


