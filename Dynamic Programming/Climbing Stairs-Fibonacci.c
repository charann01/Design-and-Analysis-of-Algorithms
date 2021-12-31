#include <stdio.h>

int main()
{
    int n,f,s,t,i;
    scanf("%d",&n);
    f = 1;
    s = 1;
    for(i=2; i<=n; i++)
    {
        t = f+s;
        f = s;
        s = t;
    }
    printf("%d",t);
}