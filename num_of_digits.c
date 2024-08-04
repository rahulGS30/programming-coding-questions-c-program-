#include<stdio.h>
int main(){
    int n=123459;
    int len=0;
    do{
        n=n/10;
        len++;
    }while(n!=0);
    printf("%d",len);
}