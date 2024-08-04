#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("enter a string");
    gets(s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    printf("upper case is %s",s);

}