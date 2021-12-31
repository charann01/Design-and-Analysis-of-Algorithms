#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    arr[0] =  1;
    arr[1] =  1;
    arr[2] =  1;
    for(int i=3;i<=n;i++)
        arr[i] = (arr[i-1] + arr[i-3])%1000000007;
    printf("%d",arr[n]);
    return 0;
}