#include<stdio.h>
#include<stdio.h>
void reverse_string(char* s){
    char* s1= strtok(s," ");
    char* arr[100];
    int count =0;
    while(s1!=NULL){
        arr[count++]=s1;
        s1= strtok(NULL," ");
    }
    for(int i=count-1;i>=0;--i){
        printf("%s ",arr[i]);
    }
}
int main(){
    char s[]="vdub sncin ncn";
    reverse_string(s);
}