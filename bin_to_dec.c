#include<stdio.h>
int dec(int n){
    int temp =n;
    int value = 0;
    int base =1;
    while(temp){
        int last= temp%10;
        temp= temp/10;
        value += last*base;
        base = base*2;
    }
    return value;
}

int main(){
    int n= 10101001;
    printf("decimal is %d",dec(n));
}