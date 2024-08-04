#include<stdio.h>
int main(){
    int n,i,j,s;
    n=5;
    for(i=0;i<n;i++){
        for(s=0;s<n-i-1;s++){
            printf("  ");
        }
        for(j=0;j<i+1;j++){
            printf("*   ");
        }
        printf("\n");
    }
}