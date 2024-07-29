#include <stdio.h>
#include <stdlib.h>
#define INDICE 10
int main(void) {
    // vetor
    int vetor[INDICE];

    // VARIÁVEL
    int i;

    // loop for para gerar os dez valores
    for (i = 0; i < INDICE; i++) {
        // vetor recebe valores aleatórios
        vetor[i] = rand() % 100;
        valoresIguais[i] = vetor[i];
    } // end for
    
    printf("Exibe os 10 valores gerados:\n");
    printf("vetor = { ");
    for (i = 0; i < INDICE; i++) {
        printf("%d ", vetor[i]);
    } // end for
    printf(" }\n\n");

    // conta os valores iguais
    for (i = 0; i < INDICE; i++)
    {
        /* code */
    }
    
    return 0;
}