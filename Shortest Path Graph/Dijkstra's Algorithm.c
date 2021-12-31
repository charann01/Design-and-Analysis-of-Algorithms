#include<stdio.h>
#include<limits.h>

int main()
{
    int n,min,min_vertex;
    scanf("%d",&n);
    int adj[n][n];
    int status[n],cost[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&adj[i][j]);
        cost[i] = INT_MAX;
        status[i]=0;
    }
    cost[0]=0;
    for(int i=0;i<n;i++)
    {
        min = INT_MAX;
        for(int v=0;v<n;v++)
        {
            if(status[v]==0 && cost[v]<=min)
            {
                min = cost[v];
                min_vertex = v;
            }
        }
        status[min_vertex] = 1;
        for(int v=0;v<n;v++)
        {
            if(status[v]==0 && adj[min_vertex][v] && cost[min_vertex]!=INT_MAX && cost[min_vertex]+adj[min_vertex][v]<cost[v])
                cost[v] = cost[min_vertex]+adj[min_vertex][v];
        }
    }
    for(int i=0;i<n;i++)
        printf("%d %d\n",i,cost[i]);
    return 0;
}