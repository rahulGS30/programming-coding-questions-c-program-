#include<stdio.h>
int main(){
    char str[]="r a h u l";
    int i,len=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            len++;
        }
    }
    printf("%d",len);
    
}