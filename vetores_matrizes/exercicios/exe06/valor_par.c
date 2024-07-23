/*
    6) Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela quantos valores pares foram armazenados nesse vetor. 
    Backes, André. Linguagem C - Completa e Descomplicada (Portuguese Edition) (p. 128). GEN LTC. Edição do Kindle. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define INDICE 10
int main()
{
    setlocale(LC_ALL, "portuguese");

    // variável
    int contaPar = 0; // conta os valores pares do vetor
    int elemento = 0; // elemento do vetor
    int total = 0; // soma os valores do vetor
    // vetor
    int vetor[INDICE]; // vetor para x elementos
    
    // loop for para entrada de dados e inicializar o vetor
    for(int i = 0; i < INDICE; i++) {
        // entrada dos dados
        printf("Informe o %d valor inteiro: ", i + 1);
        scanf("%d", &elemento); // recebe o valor do usuário

        // se elemento for par
        if(elemento %2 == 0) {
            // vetor recebe o elemento
            vetor[i] = elemento; // adiciona o valor do elemento ao vetor
            // conta os elementos pares
            contaPar++;
            // soma os elementos pares
            total += vetor[i];
        } // end if
    } // end for inicializa

    // cabeçalho
    printf("vetor original = { ");
    // loop for para exibir o vetor
    for(int i = 0; i < INDICE; i++) {
        // exibir
        printf("%d ", vetor[i]);
    } // end exibir
    printf(" }\n"); // fim do vetor

    // cabeçalho
    printf("vetor invertido = { ");
    // loop for para exibir o vetor invertido
    for(int i = INDICE - 1; i >= 0; i--) {
        // exibir
        printf("%d ", vetor[i]);
    } // end exibir
    printf(" }\n"); // fim do vetor

    // resultado
    printf("O vetor tem %d valores pares.\n", contaPar);
    printf("total dos valores pares = %d\n", total);
    // exibe a média dos valores do vetor
    printf("média dos valores pares = %.2f\n", (float) total / INDICE);
    
    return 0; // end programa
} // end main