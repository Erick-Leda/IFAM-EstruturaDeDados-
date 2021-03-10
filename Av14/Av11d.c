#include <stdio.h>
#include <stdlib.h>

/* Autor:  Erick Leda
   Data: 13/11/2020
   Objetivo: Tamanho 25 de inteiros. O usuário irá digitar a posição e um valor inteiro. O algoritmo terá que preencher os números anteriores e posteriores.
*/

int main() {

    int i, pos, val, aux1, aux2;
    int vetorMen[25];
    int vetorMai[10];

    printf("Digite a posicao do vetor: ");
    scanf("%i", &pos);

    printf("Digite o valor do vetor [%i] = ", pos);
    scanf("%i", &val);

    vetorMen[pos] = val;

    printf("vetor[%i] = %i ", pos, vetorMen[pos]);

    aux1 = pos;
    aux2 = val;

    for (i = pos - 1; i > -1; i--) {

        vetorMen[pos] = vetorMen[pos] - 1;

        printf("\n Posicoes anteriores = vetor[%i] = %i\n", i, vetorMen[pos]);

    }
    for (i = aux1 + 1; i < 25; i++) {

        aux2 = aux2 + 1;

        printf("\n Posicoes posteriores = vetor[%i] = %i\n", i, aux2);
    }
    getch();
    return 0;
}