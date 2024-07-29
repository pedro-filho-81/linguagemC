/*
    11) Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor, armazenando esse resultado em outro vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números.
    Backes, André. Linguagem C - Completa e Descomplicada (Portuguese Edition) (p. 128). GEN LTC. Edição do Kindle. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define INDICE 20
int main() {

    // vetor
    float vetor1[INDICE];
    float vetor2[INDICE];

    // adiciona elementos ao vetor
    for(int i = 0; i < INDICE; i++) {
        vetor1[i] = i; // adiciona o valor de i ao vetor
        vetor2[i] = vetor1[i] * vetor1[i]; // vetor2 recebe o valor ao quadrado do vetor1 
    } // end for

    printf("Vetor1:");
    // exibe valores do vetor
    for(int i = 0; i < INDICE; i++) { 
        // se multiplo de 10
        if (i % 5 == 0)
        {
            /* code */
            printf("\n"); // pula linha
        } // end if
        // imprime o valor de i
        printf("%7.2f ", vetor1[i]);
    } // end for

    printf("\nVetor2:");
    // exibe valores do vetor
    for(int i = 0; i < INDICE; i++) { 
        // se multiplo de 10
        if (i % 5 == 0)
        {
            /* code */
            printf("\n"); // pula linha
        } // end if
        // imprime o valor de i
        printf("%7.2f ", vetor2[i]);
    } // end for
    return 0;
} // end main