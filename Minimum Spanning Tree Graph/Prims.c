#include<stdio.h>
#include<limits.h>

int main()
{
    int n,u,v,min;
    scanf("%d",&n);
    int adj[n][n];
    int status[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&adj[i][j]);
            if(adj[i][j]==0)
                adj[i][j]=INT_MAX;
        }
        status[i]=0;
    }
    status[0]=1;
    int edges=0;
    while(edges<=n)
    {
        min = INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(adj[i][j]<min)
                {
                    if(status[i]==1)
                    {
                        min = adj[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }
        if(status[v]==0)
            printf("%d-%d %d\n",u,v,min);
        status[v]=1;
        adj[u][v]=adj[v][u]=INT_MAX;
        edges++;
    }
    return 0;
}