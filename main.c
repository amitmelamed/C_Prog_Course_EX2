#include <stdio.h>
#include "my_mat.h"
int main() {
    char choose;
    scanf("%c",&choose);
    int mat [10][10];
    int d1,d2;
    while(choose!='D'){
        if(choose=='A'){
            funcA(mat);
        }
        else if(choose=='B'){
            scanf("%d %d",&d1,&d2);
            funcB(mat,d1,d2);
            printf("\n");
        }
        else if(choose=='C'){
            scanf("%d %d",&d1,&d2);
            funcC(mat,d1,d2);
            printf("\n");

        }
        scanf("%c",&choose);
    }
}
