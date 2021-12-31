#include <stdio.h>
int series[45];

int fib(int n)
{
   if(series[n] != -1)
    return series[n];
   series[n] = fib(n-1) + fib(n-2);
   return series[n];
}

int main()
{
    int n,i;
    scanf("%d",&n);
    series[0] = 1;
    series[1] = 1;
    for(i=2;i<=n;i++)
        series[i] = -1;
    printf("%d",fib(n));
}