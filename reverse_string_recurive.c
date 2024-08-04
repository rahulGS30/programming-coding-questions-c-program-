#include<stdio.h>
#include<string.h>
void reverse(char* str,int len,int temp,int i){
    if(i<len){
        temp=str[i];
        str[i]=str[len-1];
        str[len-1]=temp;
        i++;
        len--;
        reverse(str,len,temp,i);
    }
}
int main(){
    char str[100]="hello";
    int len = strlen(str);
    reverse(str,len,0,0);
    printf(str);
}