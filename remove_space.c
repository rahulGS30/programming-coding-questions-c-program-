#include<stdio.h>
#include<stdlib.h>
char* rev_string(char* str){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[count]=str[i];
            count++;
        }
    }
    str[count]='\0';
    return str;
}
int main(){
    char str[]="r a h u l";
    printf("%s\n",str);
    printf("%s",rev_string(str));
    return 0;
}