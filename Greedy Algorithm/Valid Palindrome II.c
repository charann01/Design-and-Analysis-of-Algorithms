#include<stdio.h>
#include<stdlib.h>

int main()
{
    char c[10000];
    scanf("%s",c);
    int n=0;
    for(int i=0;c[i]!='\0';i++)
        n++;
    if(n==0 || n==1)
    {
        printf("true");
        exit(0);
    }
    int i=0,j=n-1,count=0;
    while(i<=j)
    {
        if(c[i]!=c[j] && count==0)
        {
            if(c[i+1]==c[j] && c[i+2]==c[j-1])
                i++;
            else if(c[i]==c[j-1])
                j--;
            count=1;
        }
        else if(c[i]!=c[j] && count!=0)
        {
            printf("false");
            exit(0);
        }
        else
        {
            i++;
            j--;
        }
    }
    printf("true");
    return 0;
}