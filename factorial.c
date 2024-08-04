#include<stdio.h>
int main(){
    int n=10;
    int fact =1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d",fact);

}