#include <stdio.h>
/* Autor:  Erick Leda
   Data: 13/11/2020
   Objetivo: Tamanho 500 de números maiores de 600.
*/
int main() {

    int i, num = 600;
    int vetor[500];

    for (i = 0; i <= 500; i++) {
        num++;
        vetor[i] = num;
    }

    for (i = 0; i <= 500; i++) {
        printf("\n Posicao do Vetor: %i | Numero do vetor: %i\n", i, vetor[i]);

    }
    getch();
    return 0;
}