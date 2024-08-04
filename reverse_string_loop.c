#include<stdio.h>
int main(){
    char obj[100]="rahul";
    int len= strlen(obj);
    int i,j;
    for(i=0,j=len-1;i<=j;i++,j--){
        char c= obj[i];
        obj[i]=obj[j];
        obj[j]=c;
    }
    printf(obj);
}