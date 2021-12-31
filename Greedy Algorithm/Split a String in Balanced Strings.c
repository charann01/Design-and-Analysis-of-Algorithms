#include<stdio.h>

int main()
{
    char c[1000];
    scanf("%s",c);
    int b=0,ans=0;
    for(int i=0;c[i]!='\0';i++)
    {
       if(c[i]=='R')
            b--;
        if(c[i]=='L')
            b++;
        if(b==0)
            ans++;
    }
    printf("%d",ans);
    return 0;
}