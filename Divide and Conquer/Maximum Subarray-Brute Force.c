#include<stdio.h>

int main()
{
    int n,i,j,curr,max=0;
    scanf("%d",&n);
    int nums[n];
    for(i=0;i<n;i++)
        scanf("%d",&nums[i]);
    for(i=0;i<n;i++)
    {
        curr = 0;
        for(j=i;j<n;j++)
        {
            curr += nums[j];
            max = (max>curr)?max:curr;
        }
    }
    printf("%d",max);
    return 0;
}