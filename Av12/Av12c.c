/*
    Algoritmo ED AV12c
    Autor:  Erick
    Data: 18/11/2020
*/
#include <stdio.h>
int main(){
    int mat[5][5], i, j, aux=1, val;

    printf("Escolha a quantidade de elementos, de 1 a 25: \n");
    scanf("%d",&val);
    if (val<25){
        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                if(aux <= val){
                    mat[i][j] = aux;
                    aux++;
                }
                else{
                    mat[i][j]=0;
                }
            }
        }

        for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                printf("%d ",mat[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
    else
        printf("Somente de 1 a 25");
}