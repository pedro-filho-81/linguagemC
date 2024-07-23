/*
    4) Faça um programa que possua um array de nome A que armazene seis números inteiros. O programa deve executar os seguintes passos: 
    a) Atribua os seguintes valores a esse array: 1, 0, 5, –2, –5, 7. 
    b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5] do array e mostre na tela essa soma. 
    c) Modifique o array na posição 4, atribuindo a essa posição o valor 100. 
    d) Mostre na tela cada valor do array A, um em cada linha.
    Backes, André. Linguagem C - Completa e Descomplicada (Portuguese Edition) (p. 128). GEN LTC. Edição do Kindle. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");

    // variável
    int total = 0; // para somar os valores do vetor
    
    // vetor
    // a) Atribua os seguintes valores a esse array: 1, 0, 5, –2, –5, 7.
    int a[] = {1, 0, 5, -2, -5, 7}; // vetor para 6 elementos
    printf("vetor original = { ");
    // loop for para exibir o vetor
    for(int i = 0; i < 6; i++) {
        // exibir
        printf("a[%d] = %d\n", i, a[i]);
    } // end exibir
    printf(" }\n"); // fim do vetor

    // b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5] do array e mostre na tela essa soma. 
    total += a[0] + a[1] + a[5]; // soma os valores do vetor
    
    // c) Modifique o array na posição 4, atribuindo a essa posição o valor 100. 
    a[4] = 100;

    // d) Mostre na tela cada valor do array A, um em cada linha.
    // cabeçalho
    printf("vetor modificado = { ");
    // loop for para exibir o vetor
    for(int i = 0; i < 6; i++) {
        // exibir
        printf("a[%d] = %d\n", i, a[i]);
    } // end exibir
    printf(" }\n"); // fim do vetor

    // cabeçalho
    printf("vetor invertido = { ");
    // loop for para exibir o vetor invertido
    for(int i = 5; i >= 0; i--) {
        // exibir
        printf("%d ", a[i]);
    } // end exibir
    printf(" }\n"); // fim do vetor

    // exibe a média dos valores do vetor
    printf("total = %d\n", total);
    printf("média = %.2f\n", (float) total / 6);
    
    return 0; // end programa
} // end main