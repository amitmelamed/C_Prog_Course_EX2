#include <stdio.h>
#include "my_mat.h"

void funcA(int mat [10][10]){
    for(int i=0;i<10;i++){
        for(int k=0;k<10;k++){
            scanf(" %d", &mat[i][k]);
        }
    }
}
void funcB(int mat [10][10],int d1,int d2){
    printf("hello funcB");

}
void funcC(int mat [10][10],int d1,int d2){
    printf("hello funcC");

}

