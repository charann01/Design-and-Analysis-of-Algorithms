#include<stdio.h>

int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-i-1;j++)
        {
            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    int apples=0,units=0;
    for(i=0;i<n && units+a[i]<=5000;i++)
    {
        apples++;
        units += a[i];
    }
    printf("%d",apples);
    return 0;
}