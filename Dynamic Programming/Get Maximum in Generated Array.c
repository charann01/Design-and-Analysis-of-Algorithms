#include<stdio.h>

int main()
{
    int n,max=0;
    scanf("%d",&n);
    int arr[n+1];
    arr[0]=0;
    arr[1]=1;
    for(int i=1;i<n+1;i++)
    {
        if(2*i<n+1)
            arr[2*i]=arr[i];
        if(2*i-1<n+1)
            arr[2*i-1]=arr[i]+arr[i-1];
        if(max<arr[i])
            max=arr[i];
    }
    printf("%d",max);
    return 0;
}