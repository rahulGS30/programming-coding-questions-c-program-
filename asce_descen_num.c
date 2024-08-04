#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[]={5,1,3,2,4};
    int temp=0;
    int len= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
}