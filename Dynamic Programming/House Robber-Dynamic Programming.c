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
    int n,i;
    scanf("%d",&n);
    int nums[n];
    int arrmax[n+1];
    for(i=0;i<n;i++)
        scanf("%d",&nums[i]);
    arrmax[n] = 0;
    arrmax[n-1] = nums[n-1];
    for(i=n-2;i>=0;i--)
    {
        arrmax[i] = max(arrmax[i+1],(arrmax[i+2]+nums[i]));
    }
    printf("%d",arrmax[0]);
    return 0;
}