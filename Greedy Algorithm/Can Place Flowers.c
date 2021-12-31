#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int g;
    scanf("%d",&g);
    int count =0;
    i=0;
    while(i<n)
    {
        if( a[i]==0 && (i==0 || a[i-1]==0) && (i==n-1 || a[i+1]==0))
        {
            a[i++] = 1;
            count++;
        }
        if(count>=g)
        {
            printf("true");
            exit(0);
        }
        i++;
    }
    printf("false");
    return 0;
}