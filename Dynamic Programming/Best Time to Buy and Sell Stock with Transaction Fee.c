#include<stdio.h>
#include<limits.h>
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int n,fee;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&fee);
    int cash=0,hold=-arr[0];
    for(int i=0;i<n;i++)
    {
        cash = max(cash, hold+arr[i]-fee);
        hold = max(hold, cash-arr[i]);
    }
    printf("%d",cash);
    return 0;
}