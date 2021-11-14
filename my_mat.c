#include <stdio.h>
#include "my_mat.h"
int min(int a,int b){
    return (a>b) ? b:a ;
}



void optimaize(int mat[10][10]){
    for(int k=0;k<10;k++){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(mat[i][j]!=0 && mat[i][k]!=0 && mat[k][j]!=0){
                    mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
                }
                if(i!=j && mat[i][j]==0 && mat[i][k]!=0 && mat[k][j]!=0){
                    mat[i][j]=mat[i][k]+mat[k][j];
                }

            }
        }
    }

}


void funcA(int mat [10][10]){
    for(int i=0;i<10;i++){
        for(int k=0;k<10;k++){
            scanf("%d",&mat[i][k]);
        }
    }
    optimaize(mat);
    

}

void funcB(int mat [10][10],int d1,int d2){
    
    if(mat[d1][d2]!=0){
        printf("True");
    }else{
        printf("False");
    }
}
void funcC(int mat [10][10],int d1,int d2){
   
    if(mat[d1][d2]!=0){
        printf("%d",mat[d1][d2]);
    }else{
        printf("-1");
    }
}

