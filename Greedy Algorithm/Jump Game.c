#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    do
    {
        i+=a[i];
        if(a[i]==0)
            break;
    }while(i<n-1);
    if(i==n-1)
        printf("true");
    else
        printf("false");
}