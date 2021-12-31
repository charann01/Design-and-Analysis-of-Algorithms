#include<stdio.h>

int main()
{
    char c[2000];
    int count[256] = {0};
    int x;
    scanf("%s",c);
    for(int i=0;c[i]!='\0';i++)
    {
        x = c[i];
        count[x]++;
    }
    int even=0,odd=0;
    for(int i=0;c[i]!='\0';i++)
    {
        x = c[i];
        if(count[x]%2==0)
            even++;
        else 
            odd++;
    }
    if(odd>0)
        printf("%d",(even)+1);
    else
        printf("%d",even);
    return 0;
}