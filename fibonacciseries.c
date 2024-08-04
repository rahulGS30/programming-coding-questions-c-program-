#include<stdio.h>
int main(){
    int n;
    int t1=0;
    int t2=1;
    int nextnum= t1+t2;
    scanf("%d",&n);
    printf("%d %d ",t1,t2);
    for(int i=3;i<=n;++i){
        printf("%d ",nextnum);
        t1=t2;
        t2=nextnum;
        nextnum=t2+t1;
    }
}