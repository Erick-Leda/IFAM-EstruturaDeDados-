#include <stdio.h>
#include <stdlib.h>

/* Autor:  Erick Leda
   Data: 13/11/2020
   Objetivo: Tamanho 50 preenchidos automaticamente com números aleatórios.
*/

int main() {

    int i, num = 0;
    int vetor[50];


    for (i = 0; i < 50; i++) {
        num = rand();
        vetor[i] = num;
    }

    for (i = 0; i < 50; i++) {
        printf("\n Posicao do Vetor: %i | Numero do vetor: %i\n", i, vetor[i]);

    }
    getch();
    return 0;
}