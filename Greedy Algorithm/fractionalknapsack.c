#include<stdio.h>

int main()
{
    int n, capacity,temp;
    scanf("%d", &n);
    int weight[n], value[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &weight[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &value[i]);
    scanf("%d", &capacity);
    float ratio[n];
    for (int i = 0; i < n; i++)
        ratio[i]=value[i]/weight[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-i-1;j++)
        {
            if(ratio[j]<ratio[j+1])
            {
                temp = ratio[j];
                ratio[j]=ratio[j+1];
                ratio[j+1]=temp;
                temp = weight[j];
                weight[j]=weight[j+1];
                weight[j+1]=temp;
                temp = value[j];
                value[j]=value[j+1];
                value[j+1]=temp;
            }
        }
    }
    int ans;
    for(int i=0;i<n;i++)
    {
        if(weight[i]<=capacity)
        {
            ans+=value[i];
            capacity-=weight[i];
        }
        else
        {
            ans = ans + (capacity*(float)value[i]/weight[i]);
            capacity=0;
        }
    }
    printf("%d",ans);
    return 0;
}
