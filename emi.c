#include<stdio.h>
#include<math.h>
int emi_cal(float p,float n,float r){
    r = r/(12*100);
    n=n*12;
    float emi = (p*r*pow(1+r,n))/(pow(1+r,n)-1);
    return (emi);
}
int main(){
    float p =10000;
    float n =2;
    float r=10;
    float emi=emi_cal(p,n,r);
    printf("%f",emi);
}