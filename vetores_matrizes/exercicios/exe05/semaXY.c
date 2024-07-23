/*
    5) Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.
    Backes, André. Linguagem C - Completa e Descomplicada (Portuguese Edition) (p. 128). GEN LTC. Edição do Kindle. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define INDICE 8
int main()
{
    setlocale(LC_ALL, "portuguese");

    // variável
    int elemento = 0; // elemento do vetor
    int total = 0; // soma os valores do vetor
    // vetor
    int vetor[INDICE]; // vetor para 6 elementos
    
    // loop for para entrada de dados e inicializar o vetor
    for(int i = 0; i < INDICE; i++) {
        // entrada dos dados
        printf("Informe o %d valor inteiro: ", i + 1);
        scanf("%d", &elemento); // recebe o valor do usuário
        vetor[i] = elemento; // adiciona o valor do elemento ao vetor
    } // end for inicializa

    // cabeçalho
    printf("vetor original = { ");
    // loop for para exibir o vetor
    for(int i = 0; i < INDICE; i++) {
        // exibir
        printf("%d ", vetor[i]);
    } // end exibir
    printf(" }\n"); // fim do vetor

    // vetor modificado na posição x = 4 e y = 6
    vetor[4] = 100;
    vetor[6] = 200;
    
    // cabeçalho
    printf("vetor modificado = { ");
    // loop for para exibir o vetor
    for(int i = 0; i < INDICE; i++) {
        // exibir
        printf("%d ", vetor[i]);
    } // end exibir
    printf(" }\n"); // fim do vetor

    // soma
    total = vetor[4] + vetor[6];
    
    // cabeçalho
    printf("vetor invertido = { ");
    // loop for para exibir o vetor invertido
    for(int i = INDICE - 1; i >= 0; i--) {
        // exibir
        printf("%d ", vetor[i]);
    } // end exibir
    printf(" }\n"); // fim do vetor

    // resultado
    printf("total = %d\n", total);
    // exibe a média dos valores do vetor
    printf("média = %.2f\n", (float) total / 2);
    
    return 0; // end programa
} // end main