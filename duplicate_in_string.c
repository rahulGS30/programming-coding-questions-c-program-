#include<stdio.h>
#include<string.h>
void duplicate_v(char* s){
    int len = strlen(s);
    for(int i=0;i<len-1;i++){
        int duplicate=0;
        for(int j=i+1;j<len;j++){
            if(s[i]==s[j]){
                duplicate=1;
                break;
            }
        }
        if(duplicate){
            printf("duplicate item is %c\n",s[i]);
        }
    }
}
int main(){
    char s[]="programming";
    duplicate_v(s);
}