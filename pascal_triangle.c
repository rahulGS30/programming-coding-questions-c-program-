#include<stdio.h>
int main(){
    int n,i,j,s,c;
    n=5;
    for(i=0;i<n;i++){
        for(s=0;s<n-i-1;s++){
            printf("  ");
        }
        for(j=0;j<i+1;j++){
            if(j==0){
                c=1;
            }else{
                c=c*(i-j+1)/j;
            }
            printf("%d   ",c);
        }
        printf("\n");
    }
}