#include<stdio.h>
#include<stdlib.h>
int board[20];
void print(int n)
{
 for(int i=n;i>=1;i--)
 {
     for(int j=1;j<=n;j++)
     {
         if(board[i]==j)
            printf("Q");
        else
            printf(".");
     }
     printf("\n");
 }
}

int place(int row, int col)
{
    for(int i=1;i<=row;i++)
    {
        if(board[i]==col)
            return 0;
        else if(abs(board[i]-col) == abs(i-row))
            return 0;
    }
    return 1;
}

void queen(int row, int n)
{
    int col;
    for(col=1;col<=n;col++)
    {
        if(place(row,col))
        {
            board[row]=col;
            if(row==n)
                print(n);
            else
                queen(row+1,n);
        }
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    queen(1,n);
    return 0;
}

