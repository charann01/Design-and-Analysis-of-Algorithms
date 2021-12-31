#include <stdio.h>

int main()
{
    int n,i,j,flag=0;
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n+1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n+1;i++)
    {
        for(j=i+1; j<n+1; j++)
        {
            if(a[i] == a[j])
            {
                flag = 1;
                printf("%d",a[i]);
                break;
            }
        }
        if(flag == 1)
            break;
    }
    return 0;
}