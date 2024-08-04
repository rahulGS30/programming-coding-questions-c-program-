#include<stdio.h>
int main(){
    int i,j,k=1;
    int n=5;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            printf("%d ",k++);
        }
    printf("\n");
    }
}