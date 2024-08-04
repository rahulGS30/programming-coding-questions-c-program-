#include<stdio.h>
int main(){
    int n1=18,n2=45,hcf=1;
    int min=(n1<n2) ? n1:n2;
    for(int i=1;i<=min;i++){
        if(n1%i==0 && n2%1==0){
            hcf=i;
        }
    }
    printf("hcf if %d ",hcf);
}