#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int gas[n],cost[n];
    for(i=0;i<n;i++)
        scanf("%d",&gas[i]);
    for(i=0;i<n;i++)
        scanf("%d",&cost[i]); 
    int tt=0, sp=0, ct=0;
    for(i=0;i<n;i++)
    {
       tt += gas[i]-cost[i];
       ct += gas[i]-cost[i];
       if(ct<0)
       {
           sp = i+1;
           ct = 0;
       }
    }
    if(tt>=0)
        printf("%d",sp);
    else
        printf("-1");
    return 0;
}