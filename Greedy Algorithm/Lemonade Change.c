#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int f=0,t=0,tw=0,flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==5)
            f++;
        if(arr[i]==10)
        {
            if(f>0)
            {
                t++;
                f--;
            }
            else
            {
                flag=1;
                printf("false");
                break;
            }
        }
        if(arr[i]==20)
        {
            if(f>0 && t>0)
            {
                f--;
                t--;
                tw++;
            }
            else if(f>2)
            {
               f-=3;
               tw++;
            }
            else
            {
                flag=1;
                printf("false");
                break;
            }
        }
    }
    if(flag==0)
        printf("true");
    return 0;
}