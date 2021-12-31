#include<stdio.h>

int main()
{
    int n,res=1;
    scanf("%d",&n);
    if(n==2 || n==3)
    {
        printf("%d",n-1);
    }
    else
    {
        while(n>4)
        {
            n-=3;
            res*=3;
        }
        printf("%d",n*res);
    }
    return 0;
}