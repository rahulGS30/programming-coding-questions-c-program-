#include<stdio.h>
#include<math.h>

int main(){
    double p=10000;
    double r = 5;
    double t=2;
    double amount = p*(pow((1+r/100),t));
    double ci = amount-p;
    printf("%lf",ci);
}