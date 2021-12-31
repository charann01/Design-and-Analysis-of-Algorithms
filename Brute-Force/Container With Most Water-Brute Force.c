#include<stdio.h>

int main()
{
    int n,i,j,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                if(max < (a[j]*(j-i)))
                    max = a[j]*(j-i);
            }
            else
            {
                if(max < (a[i]*(j-i)))
                    max = a[j]*(j-i);
            }
        }
    }
    printf("%d",max);
    return 0;
}