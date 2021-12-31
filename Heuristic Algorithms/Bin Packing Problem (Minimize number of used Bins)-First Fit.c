#include<stdio.h>
int main()
{
    int n,c,count=0;
    scanf("%d",&n);
    int arr[n],bins[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    scanf("%d",&c);
    for(int i=0; i<n; i++)
    {
        int j;
        for(j=0; j<count; j++)
        {
            if( bins[j] >= arr[i] )
            {
                bins[j] -= arr[i];
                break;
            }
        }
        if(j==count)
        {
            bins[count] = c - arr[i];
            count++;   
        }
    }
    printf("%d",count);
    return 0;
}