#include <stdio.h>

/* Autor:  Erick Leda
   Data: 13/11/2020
   Objetivo: Tamanho 200 de números reais maiores que 800.
*/

int main() {

    int i;
    float num = 800, vetor[200];

    for (i = 0; i <= 200; i++) {
        num++;
        vetor[i] = num;
    }

    for (i = 0; i <= 200; i++) {
        printf("\n Posicao do Vetor: %i | Numero do vetor: %.1f\n", i, vetor[i]);

    }
    getch();
    return 0;
}