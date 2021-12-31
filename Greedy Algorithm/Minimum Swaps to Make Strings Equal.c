#include<stdio.h>

int main()
{
    char c1[1000],c2[1000];
    int m=0,n=0;
    scanf("%s %s",c1,c2);
    for(int i=0;c1[i]!='\0';i++)
    {
        if(c1[i]=='x' && c2[i]=='y')
            m++;
        if(c1[i]=='y' && c2[i]=='x')
            n++;
    }
    if((m%2==0) && (n%2==0))
        printf("%d",((m/2)+(n/2)));
    else if((m+n)%2==0)
        printf("%d",((m/2)+(n/2))+2);
    else
        printf("-1");
    return 0;
}