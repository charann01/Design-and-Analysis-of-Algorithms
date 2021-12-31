#include<stdio.h>

int stringlen(int x)
{
    int len=0;
    while(x>0)
    {
        x/=10;
        len++;
    }
    return len;
}

int power(int b,int e)
{
    int ans=1;
    for(int i=1;i<=e;i++)
        ans *= b;
    return ans;
}

int main()
{
    int n;
    scanf("%d",&n);
    int len=stringlen(n);
    int arr[len];
    for(int i=0;i<len;i++)
    {
        arr[i]=n/power(10,len-i-1);
        n%=power(10,len-i-1);
    }
    int ind=0;
    for(int i=0;i<len-1;i++)
    {
        if(arr[i]==arr[i+1])
            continue;
        if(arr[i]<arr[i+1])
            ind = i+1;
        if(arr[i]>arr[i+1])
        {
            arr[ind]--;
            for(int j=ind+1;j<len;j++)
                arr[j]=9;
            break;
        }
    }
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(count==0 && arr[i]==0)
            continue;
        else
        {
            printf("%d",arr[i]);
            count++;
        }
    }
    return 0;
}