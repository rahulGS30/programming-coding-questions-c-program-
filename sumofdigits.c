#include<stdio.h>
int getnum(int n){
    int sum =0;
    while (n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int n=12345;
    printf("%d",getnum(n));
    return 0;
}