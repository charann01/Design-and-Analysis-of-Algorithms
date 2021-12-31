#include<stdio.h>

int main()
{
    int n,i,peak=0,valley=0,profit=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    i=0;
    while(i<n-1)
    {
        while(i<n-1 && (arr[i]>=arr[i+1]))
            i++;
        valley = arr[i];
        while(i<n-1 && (arr[i]<=arr[i+1]))
            i++;
        peak = arr[i];
        profit += peak-valley;
    }
    printf("%d",profit);
    return 0;
}