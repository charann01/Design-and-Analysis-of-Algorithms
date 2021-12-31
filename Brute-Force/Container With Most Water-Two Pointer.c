#include <stdio.h>

int main()
{
    int n,i,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    int left=0, right=n-1;
    while(left<right)
    {
        if(a[left] < a[right])
        {
            if(max < (a[left]*(right-left)))
                max = a[left]*(right-left);
            left++;
        }
        else
        {
            if(max < (a[right]*(right-left)))
                max = a[right]*(right-left);
            left++;   
        }
    }
    printf("%d",max);
    return 0;
}