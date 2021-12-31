#include<stdio.h>

int main()
{
    int target,sv;
    scanf("%d %d",&sv,&target);
    int count =0;
            while(target>sv)
            {
                count++;
                if(target%2==0)
                    target /= 2;
                else
                    target += 1;
            }
    count += (sv-target);
    printf("%d",count);
    return 0;
}