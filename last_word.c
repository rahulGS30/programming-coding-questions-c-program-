#include<stdio.h>
#include<string.h>
int main(){
    char s[]="the star boy rahul";
    char* word= strrchr(s,' ')+1;
    int len = strlen(word);
    printf("%s\n",word);
    printf("%d",len);
    return 0;
}