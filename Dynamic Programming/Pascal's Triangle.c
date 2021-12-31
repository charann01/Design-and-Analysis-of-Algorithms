#include<stdio.h>

int main()
{
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0 || j==i)
                a=1;
            else
                a=a*(i-j+1)/j;
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
}