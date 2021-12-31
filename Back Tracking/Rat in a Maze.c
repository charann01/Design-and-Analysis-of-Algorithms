#include <stdio.h>
int n;
int maze[100][100];
int solution[100][100];

int solvemaze(int r, int c)
{
    if(r==n-1 && c==n-1)
    {
        solution[r][c]=1;
        return 1;
    }
    if(r>=0 && c>=0 && r<n && c<n && solution[r][c]==0 && maze[r][c]==1)
    {
        solution[r][c]=1;
        if(solvemaze(r,c+1))
            return 1;
        if(solvemaze(r+1,c))
            return 1;
        solution[r][c]=0;
        return 0;
    }
    return 0;
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&maze[i][j]);
            solution[i][j] = 0;
        }
    }
    if(solvemaze(0,0))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",solution[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}