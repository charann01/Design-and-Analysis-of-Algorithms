#include <stdio.h>

int getMaxVal(int n, int w[], int v[], int c, int i)
{
    int vin,vex;
    if(i==n || c==0)
        return 0;
    if(w[i] <= c)
    {
        vin = getMaxVal(n, w, v, c-w[i], i+1) + v[i];
        vex = getMaxVal(n, w, v, c, i+1);
        if(vin > vex)
            return vin;
        else
            return vex;
    }
    else
    {
        vex = getMaxVal(n, w, v, c, i+1);
        return vex;
    }
}

int main()
{
    int n,c,i;
    scanf("%d",&n);
    int w[n],v[n];
    for(i=0;i<n;i++)
        scanf("%d",&w[i]);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    scanf("%d",&c);
    printf("%d",getMaxVal(n, w, v, c, 0));
    return 0;
}