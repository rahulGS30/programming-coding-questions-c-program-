#include<stdio.h>
int main(){
    int mat1[3][3] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };
    int mat2[3][3] = { {9, 10, 11}, {12, 13, 14}, {15, 16, 17} };
    int sum[3][3], i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",sum[i][j]);
            if(j==3-1){
                printf("\n");
            }
        }
    }
}