#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(n<2)
        printf("0");
    else if(arr[0]>=n-1)
        printf("1");
    else
    {
        int count=0,max=0,end=0;
        for(int i=0;i<n-1;i++)
        {
            max = arr[i]+i > max?arr[i]+i:max;
            if(i==end)
            {
                end=max;
                count++;
            }
        }
        printf("%d",count);
    }
    return 0;
}