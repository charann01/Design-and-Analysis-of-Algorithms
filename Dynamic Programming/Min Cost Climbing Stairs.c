#include<stdio.h>

int min(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int dp1=0,dp2=0;
    for(int i=0;i<n;i++)
    {
        int dp0 = a[i] + min(dp1,dp2);
        dp2 = dp1;
        dp1 = dp0;
    }
    int temp = min(dp1,dp2);
    printf("%d",temp);
    return 0;
}