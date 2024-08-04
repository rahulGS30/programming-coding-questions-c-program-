#include<stdio.h>

void dectobin(int n){
    int arr[32];
    int i=0;
    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d ",arr[j]);
    }
}

int main(){
    int n=7;
    dectobin(n);
    return 0;
}