#include <stdio.h>

int main() {
    int i, vetor[10];

    for (i=0; i<10; i++){
        vetor[i]=10-i;
        printf("%d ", vetor[i]);
    }

    return 0;
}
