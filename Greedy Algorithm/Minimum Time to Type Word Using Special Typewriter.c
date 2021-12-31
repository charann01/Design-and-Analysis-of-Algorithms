#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[100];
    scanf("%s",a);
    int n = strlen(a);
    int res = strlen(a);
    char prev,nxt,dst;
    prev = 'a';
    for(int i=0; i<n; i++)
    {
        nxt = a[i];
        dst = abs(prev-nxt);
        res += (dst<26-dst?dst:26-dst);
        prev = nxt;
    }
    printf("%d",res);
    return 0;
}