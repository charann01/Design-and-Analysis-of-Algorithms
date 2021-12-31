#include<stdio.h>

int main()
{
    int n,capacity,t1,t2;
    scanf("%d",&n);
    int weights[n],values[n];
    for(int i=0;i<n;i++)
        scanf("%d",&weights[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&values[i]);
    scanf("%d",&capacity);
    int table[n+1][capacity+1];
    for(int i=0;i<n+1;i++)
        table[i][0]=0;
    for(int i=0;i<capacity+1;i++)
        table[0][i]=0;
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<capacity+1;j++)
        {
            if(j>=weights[i-1])
            {
                t1=table[i-1][j];
                t2=values[i-1]+table[i-1][j-weights[i-1]];
                table[i][j]=t1>t2?t1:t2;
            }
            else
            {
                table[i][j]=table[i-1][j];
            }
        }
    }
    int i=n;
    int k=capacity;
    int selected[n+1];
    for(int i=0;i<n+1;i++)
        selected[i]=0;
    while(i>0 && k>0)
    {
        if(table[i][k]!=table[i-1][k])
        {
            selected[i]=1;
            i--;
            k -= weights[i];
        }
        else
            i--;
    }
    printf("(");
    for(int i=1;i<n+1;i++)
    {
        printf("%d",selected[i]);
        if(i!=n)
            printf(", ");
    }
    printf(")");
    return 0;
}