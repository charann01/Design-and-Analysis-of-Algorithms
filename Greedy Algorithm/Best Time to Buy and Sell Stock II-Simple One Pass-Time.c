#include<stdio.h>

int main()
{
    int n,i,profit=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
            profit += (arr[i]-arr[i-1]);
    }
    printf("%d",profit);
    return 0;
}