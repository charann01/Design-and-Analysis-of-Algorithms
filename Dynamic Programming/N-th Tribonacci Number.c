#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    for(int i=3;i<=n;i++)
        arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
    printf("%d",arr[n]);
    return 0;
}