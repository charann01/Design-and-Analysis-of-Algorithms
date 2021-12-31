#include<stdio.h>
#include<string.h>
#include<limits.h>

int main()
{
    char c[100];
    scanf("%s",c);
    int x = strlen(c);
    for(int i=0; i<x; i++)
    {
        if(c[i]=='6')
        {
            c[i] = '9';
            break;
        }
    }
    printf("%s",c);
    return 0;
}