#include<stdio.h>
void bubble_sort(int arr[],int n){
    for(int i=0; i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={3,5,2,6,1,7,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
}