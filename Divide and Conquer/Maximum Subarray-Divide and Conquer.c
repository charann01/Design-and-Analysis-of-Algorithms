#include<stdio.h>
#include<limits.h>

int numsArray[100000];

int findBestSubarray(int left, int right)
{
    if(left>right)
        return INT_MIN;
    int mid = (left+right)/2;
    int curr=0;
    int bestLeftSum = 0;
    int bestRightSum = 0;
    for(int i=mid-1;i>=left;i--)
    {
        curr += numsArray[i];
        bestLeftSum = (curr>bestLeftSum)?curr:bestLeftSum;
    }
    curr=0;
    for(int i=mid+1;i<=right;i++)
    {
        curr += numsArray[i];
        bestRightSum = (curr>bestRightSum)?curr:bestRightSum;
    }
    int bestCombinedSum = numsArray[mid] + bestLeftSum + bestRightSum;
    int leftHalf = findBestSubarray(left,mid-1);
    int rightHalf = findBestSubarray(mid+1,right);
    int answer;
    if(leftHalf>rightHalf && leftHalf>bestCombinedSum)
        answer = leftHalf;
    else if(rightHalf>leftHalf && rightHalf>bestCombinedSum)
        answer = rightHalf;
    else
        answer = bestCombinedSum;
    return answer;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&numsArray[i]);
    printf("%d",findBestSubarray(0,n-1));
    return 0;
}