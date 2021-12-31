#include<stdio.h>

int main(){
    
    // init necessary variables
    int n,capacity,left,right;
    
    // get no. of items
    scanf("%d",&n);
    
    // init datastructs
    int val[n],weight[n];
    
    // get weights
    for(int i=0;i<n;i++){
        scanf("%d",&weight[i]);
    }
    
    // get values
    for(int i=0;i<n;i++){
        scanf("%d",&val[i]);
    }
    
    // get capacity
    scanf("%d",&capacity);

    int table[n+1][capacity+1];
    
    // row 0
    for(int i=0;i<n+1;i++){
        table[i][0] = 0;    
    }
    
    // cols 0
    for(int i=0;i<capacity+1;i++){
        table[0][i] = 0;
    }
    
    // fill the table
    for(int i=1;i<n+1;i++){
        for(int j=1;j<capacity+1;j++){
            if(j >= weight[i-1]){
                left = table[i-1][j];
                right = val[i-1] + table[i-1][j - weight[i-1]];
                table[i][j] = left > right ? left : right;
                } else {
                table[i][j] = table[i-1][j];
            }
        }
    }
    
    // print the last element
    printf("%d",table[n][capacity]);
}