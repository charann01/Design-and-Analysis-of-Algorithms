#include<stdio.h>

int main()
{
    int m,n,i,j,content=0;
    scanf("%d",&m);
    int g[m];
    for(i=0;i<m;i++)
        scanf("%d",&g[i]);
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    i=0;
    j=0;
    while(i<m && j<n)
    {
        if(s[j]>=g[i])
        {
            content++;
            i++;
            j++;
        }
        else
            j++;
    }
    printf("%d",content);
    return 0;
}