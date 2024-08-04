#include<stdio.h>
int main(){
    int num=153;
    int num1=num;
    int result =0;
    while(num1!=0){
        int rem=num1%10;
        result+=rem*rem*rem;
        num1=num1/10;
    }
    if(num==result){
        printf("it is armstrong");
    }else{
        printf("not armstrong");
    }
    return 0;
}