#include <stdio.h>

int main()
{
    int T,m,n,i,j;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&m);
        int a1[m];
        for(i=0;i<m;i++)
            scanf("%d",&a1[i]);
        scanf("%d",&n);
        int a2[n];
        for(i=0;i<n;i++)
            scanf("%d",&a2[i]);  
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a1[i] == a2[j])
                {
                    printf("%d ",a1[i]);
                    break;
                }
            }
        }
    }
    return 0;
}