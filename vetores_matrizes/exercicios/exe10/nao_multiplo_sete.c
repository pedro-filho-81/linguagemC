/*
    10) Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.Backes, André. Linguagem C - Completa e Descomplicada (Portuguese Edition) (p. 128). GEN LTC. Edição do Kindle. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {

    // vetor para adicionar 100 elementos
    int vetor[100] = {0};

    // adiciona elementos ao vetor
    for(int i = 0; i < 100; i++) {
        vetor[i] = i; // adiciona o valor de i ao vetor
        if (i % 7 == 0) // se multiplo de 7
        {
            vetor[i] = 0; // vetor recebe o valor 0
        } // end else if  
    } // end for

    // exibe valores do vetor
    for(int i = 0; i < 100; i++) { 
        // se multiplo de 10
        if (i % 10 == 0)
        {
            /* code */
            printf("\n"); // pula linha
        } // end if
        // imprime o valor de i
        printf("%3d ", vetor[i]);
    } // end for

    return 0;
} // end main