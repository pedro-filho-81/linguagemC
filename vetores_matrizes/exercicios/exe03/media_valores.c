/*
    3) Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os valores lidos juntamente com a média dos valores.
    Backes, André. Linguagem C - Completa e Descomplicada (Portuguese Edition) (p. 128). GEN LTC. Edição do Kindle. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");

    // constante
    const int indice = 6; // número de elementos do vetor
    
    // variável
    int elemento = 0; // elemento do vetor
    int total = 0; // soma os valores do vetor
    // vetor
    int vetor[indice]; // vetor para 6 elementos
    
    // loop for para entrada de dados e inicializar o vetor
    for(int i = 0; i < indice; i++) {
        // entrada dos dados
        printf("Informe o %d valor inteiro: ", i + 1);
        scanf("%d", &elemento); // recebe o valor do usuário
        vetor[i] = elemento; // adiciona o valor do elemento ao vetor
        total += vetor[i]; // soma os valores do vetor
    } // end for inicializa

    // cabeçalho
    printf("vetor original = { ");
    // loop for para exibir o vetor
    for(int i = 0; i < indice; i++) {
        // exibir
        printf("%d ", vetor[i]);
    } // end exibir
    printf(" }\n"); // fim do vetor

    // cabeçalho
    printf("vetor invertido = { ");
    // loop for para exibir o vetor invertido
    for(int i = indice - 1; i >= 0; i--) {
        // exibir
        printf("%d ", vetor[i]);
    } // end exibir
    printf(" }\n"); // fim do vetor

    // exibe a média dos valores do vetor
    printf("média = %.2f\n", (float) total / indice);
    
    return 0; // end programa
} // end main