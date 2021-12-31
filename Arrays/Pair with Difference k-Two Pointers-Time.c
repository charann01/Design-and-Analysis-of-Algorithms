#include<stdio.h>

int main()
{
    int n,k,flag=0,left=0,right=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    while(1)
    {
        if(k==0)
        {
            flag = 1;
            printf("0");
            break;
        }
        if(a[right] - a[left] == k)
        {
            flag = 1;
            printf("1");
            break;
        }
        else if(a[right] - a[left] > k)
            left++;
        else if(a[right] - a[left] < k)
            right++;
    }
    if(flag==0)
        printf("0");
    return 0;
}