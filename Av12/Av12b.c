/*
    Algoritmo ED AV12b
    Autor:  Erick
    Data: 18/11/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define maxi 10
#define maxj 10

int main (){


    int matA[10][10], i, j;
    int matB[10][10];

    srand(time(NULL));
    for(i = 0; i < maxi; i++ ){
        for( j = 0; j <maxj ; j++){
            matA[i][j]=rand()%100;
        }
    }
    srand(time(NULL));
    for(i = 0; i < maxi; i++ ){
        for( j = 0; j <maxj ; j++){
            matB[i][j]=rand()%100;
        }
    }

    for(i = 0; i <maxi ; i++ ){
        for(j = 0; j < maxj ; j++){
            printf(" %d \t", matA[i][j]);
        }
        printf("\n");
    }
    printf ("\n");
printf("---------------------------------------------////---------------------------------------------\n");
    for(i = 0; i <maxi ; i++ ){
        for(j = 0; j < maxj ; j++){
            printf(" %d \t", matB[i][j]);
        }
        printf("\n");
    }
    printf ("\n");
printf("---------------------------------------------////---------------------------------------------\n");

    for(i = 0; i <maxi ; i++ ){
        for(j = 0; j < maxj ; j++){
            printf("%d \t", matA[i][j]+matB[i][j]);
        }
        printf("\n");
    }
    printf ("\n");

    return 0;
}