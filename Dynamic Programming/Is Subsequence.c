#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[10000];
    scanf("%s %s",str1,str2);
    int i,j=0;
    int m = strlen(str1);
    int n = strlen(str2);
    for(i=0;i<n&&j<m;i++)
        if(str1[j]==str2[i])
            j++;
    if(j==m)
        printf("true");
    else
        printf("false");
    return 0;
}