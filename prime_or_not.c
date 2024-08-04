#include<stdio.h>
int main(){
    int n=9;
    int flag=0;
    if(n==0 || n==1){
        flag=1;
    }
    for(int i=2;i<n/2;++i){
        if (n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("prime");
    }else{
        printf("not a prime");
    }
    
}