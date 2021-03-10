#include <stdio.h>
#include <stdlib.h>

/* Autor:  Erick Leda
   Data: 13/11/2020
   Objetivo: Tamanho  ímpar. Preencher manualmente e verificar se é um vetor palíndromo. Pesquise sobre números palíndromo.
*/

int main() {
    int n = 9;
    int vet[9];
    int i, j, pali;

    for (i=0; i<n; i++) {
        printf(" \nInforme %2do. elemento de %d: ", (i+1), n);
        scanf("%d", &vet[i]);
    }

    i = 0; //
    j = (n-1);
    pali = 1; //
    while ((i < j) && (pali == 1)) {
        if (vet[i] != vet[j])
            pali = 0;
        else {
            i = i + 1;
            j = j - 1;
        }
    }

    if (pali == 1) {
        printf("\n Os elementos do vetor formam um palindromo.\n", vet[i]);
    }
    else {
        printf("\n Os elementos do vetor nao formam um palindromo. \n");
    }
    getch();
    return 0;
}