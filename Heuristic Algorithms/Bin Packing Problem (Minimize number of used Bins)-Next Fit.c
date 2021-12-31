#include<stdio.h>

int main()
{
    int n,c,sum=0,count=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&c);
    for(int i=0;i<n;i++)
    {
        if((sum+arr[i])<c)
            sum+=arr[i];
        else
        {
            count++;
            sum = arr[i];
        }
    }    
    printf("%d",count);
    return 0;
}