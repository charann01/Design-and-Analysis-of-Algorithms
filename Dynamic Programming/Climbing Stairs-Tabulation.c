#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int series[n];
    series[0] = 1;
    series[1] = 1;
    for(i=2; i<=n; i++)
        series[i] = series[i-1] + series[i-2];
    printf("%d",series[n]);
}