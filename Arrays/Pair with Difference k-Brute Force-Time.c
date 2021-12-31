#include<stdio.h>
int main()
{
    int n,k,i,j,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j] - a[i] == k)
            {
                printf("1");
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0)
        printf("0");
    return 0;
}