#include<stdio.h>

int main()
{
    char ch[100];
    scanf("%s",ch);
    int o=0,c=0;
    for(int i=0;ch[i]!=0;i++)
    {
        if(ch[i]=='(')
            o++;
        if(ch[i]==')')
            c++;
    }
    if(o==c || o==c+1 || o+1==c)
        printf("true");
    else
        printf("false");
    return 0;
}