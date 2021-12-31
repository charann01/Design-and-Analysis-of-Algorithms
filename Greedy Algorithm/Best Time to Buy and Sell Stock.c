#include<stdio.h>
#include<limits.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int minprice = INT_MAX;
    int maxprice = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<minprice)
            minprice = arr[i];
        else if((arr[i] - minprice) > maxprice)
            maxprice = arr[i]-minprice;
    }
    printf("%d",maxprice);
    return 0;
}