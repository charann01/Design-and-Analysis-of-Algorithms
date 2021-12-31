#include<stdio.h>

int power(int b,int e)
{
    int ans=1;
    for(int i=1;i<=e;i++)
        ans *= b;
    return ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int x = 0;
    for(int i=0;i<n;i++)
        x = x | arr[i];
    x *= power(2,n-1);
    printf("%d",x);
    return 0;
}