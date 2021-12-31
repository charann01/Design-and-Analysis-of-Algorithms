#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n-1];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
        b[i] = 0;
    for(i=0;i<n;i++)
        b[a[i] - 1]++;
    for(i=0;i<n-1;i++)
    {
        if(b[i] == 2)
        {
            printf("%d", ++i);
            break;
        }
    }
    return 0;
}