#include<stdio.h>
int main(){
    int n=1113,rev=0,rem;
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d",rev);
    
}