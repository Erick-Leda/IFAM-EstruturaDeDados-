/*
    Algoritmo ED AV12a
    Autor:  Erick
    Data: 18/11/2020
*/
#include <stdio.h>
#define maxi 50
#define maxj 50

int main (){

    int mat[50][50], i, j, aux = -1;

    for(i = 0; i < maxi; i++ ){
        for( j = 0; j < maxj; j++){

            aux=aux+1;
            mat[i][j]=aux;
        }
        aux= -1;
    }

    for(i = 0; i <maxi ; i++ ){
        for(j = 0; j < maxj ; j++){

            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
    printf ("\n");
}
