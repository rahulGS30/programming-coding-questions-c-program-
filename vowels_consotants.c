#include<stdio.h>
void vowels_consotants(char* str){
    char ch;
    int i,vowels=0,consotants=0;
    for(i=0;str[i]!='\0';i++){
        ch=str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vowels++;
        }else if(ch==" "){
            continue;
        }else{
            consotants++;
        }

    }
    printf("%d ",vowels);
    printf("%d ",consotants);
}
int main(){
    char* str="rahul g s";
    printf("%s ",str);
    vowels_consotants(str);

}