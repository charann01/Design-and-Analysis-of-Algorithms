#include<stdio.h>
#define max 15

int n,e,front=-1,rear=-1;
int adj[max][max];
int status[max];
int queue[max];

int isEmpty()
{
    if(front==-1)
        return 1;
    else
        return 0;
}

void enqueue(int ele)
{
    if(front==-1)
        front++;
    rear++;
    queue[rear]=ele;
}

void dequeue()
{
    printf("%d ",queue[front]);
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
        front++;
}

int getFront()
{
    return queue[front];
}

void bfs(int node)
{
    enqueue(node);
    status[node]=1;
    int x= node;
    while(!isEmpty())
    {
        dequeue();
        for(int i=1;i<=n;i++)
        {
            if(adj[x][i]==1 && status[i]==0)
            {
                enqueue(i);
                status[i]=1;
            }
        }
        x = getFront();
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
    bfs(1);
    return 0;
}