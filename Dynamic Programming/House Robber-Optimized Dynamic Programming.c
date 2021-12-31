#include<stdio.h>

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int n,prev,curr,temp;
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++)
        scanf("%d",&nums[i]);
    curr = nums[n-1];
    prev = 0;
    for(int i=n-2;i>=0;i--)
    {
        temp = max(curr, prev+nums[i]);
        prev = curr;
        curr = temp;
    }
    printf("%d",temp);
    return 0;
}