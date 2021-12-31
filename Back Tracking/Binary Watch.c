#include<stdio.h>

int count(int val)
{
    int c=0;
    while(val)
    {
        c += val&1;
        val>>=1;
    }
    return c;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int h=0;h<12;h++)
    {
        for(int m=0;m<60;m++)
        {
            if(count(h)+count(m)==n)
                printf("%d:%02d\n",h,m);
        }
    }
    return 0;
}