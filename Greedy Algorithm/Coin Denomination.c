#include <stdio.h>

int main()
{
    int coins[] = { 1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int n,count=0;
    scanf("%d",&n);
    for(int i=9;i>=0;i--)
    {
        if(n<=0)
            break;
        else
        {
            count += (n/coins[i]);
            n %= coins[i];
        }
        
    }
    printf("%d",count);
    return 0;
}