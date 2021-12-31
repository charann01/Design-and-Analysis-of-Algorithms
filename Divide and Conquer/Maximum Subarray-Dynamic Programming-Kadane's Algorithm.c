#include<stdio.h>

int main()
{
    int n,i,curr,max;
    scanf("%d",&n);
    int nums[n];
    for(i=0;i<n;i++)
        scanf("%d",&nums[i]);
    curr = nums[0];
    max = nums[0];
    for(i=1;i<n;i++)
    {
        if(curr<0)
            curr = nums[i];
        else
            curr += nums[i];
        max = (max>curr)?max:curr;
    }
    printf("%d",max);
    return 0;
}