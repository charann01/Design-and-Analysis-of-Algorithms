#include<stdio.h>
#define max 15

int n,e,top=-1;
int adj[max][max];
int status[max];
int stack[max];

int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

void push(int e)
{
    top++;
    stack[top]=e;
}

void pop()
{
    top--;
}

int peek()
{
    return stack[top];
}

void dfs(int node)
{
    int x,flag;
    push(node);
    while(!isEmpty())
    {
        flag=0;
        x = peek();
        if(status[x]==0)
        {
            printf("%d ",x);
            status[x]=1;
        }
        for(int i=1;i<=n;i++)
        {
            if(adj[x][i]==1 && status[i]==0)
            {
                push(i);
                flag=1;
                break;
            }
        }
        if(flag==0)
            pop();
    }
}

int main()
{
    scanf("%d %d",&n,&e);
    int edges1[e+1],edges2[e+1];
    for(int i=1;i<e+1;i++)
        scanf("%d",&edges1[i]);
    for(int i=1;i<e+1;i++)
        scanf("%d",&edges2[i]);
    for(int i=1;i<n+1;i++)
        for(int j=1;j<n+1;j++)
            adj[i][j]=0;
    for(int i=1;i<e+1;i++)
    {
        adj[edges1[i]][edges2[i]]=1;
        adj[edges2[i]][edges1[i]]=1;
    }
    for(int i=1;i<=e+1;i++)
        status[i]=0;
    dfs(1);
    return 0;
}
