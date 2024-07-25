/*
    9) Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. Crie um novo array C calculando C = A – B. Mostre na tela os dados do array C. 
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
    int elemento = 0; // elemento do vetor
    int total = 0; // soma os valores do vetor
    int maior = 0; // maior valor do vetor
    int menor = 0; // menor valor
    int positivos = 0; // números positivos
    int negativos = 0; // números negativos
    
    // vetor
    int vetorA[INDICE]; // vetor para x elementos
    int vetorB[INDICE];
    int vetorC[INDICE];
    
    // loop for para entrada de dados e inicializar o vetor
    for(int i = 0; i < INDICE; i++) {
        // entrada dos dados
        printf("Informe o %d valor inteiro: ", i + 1);
        scanf("%d", &elemento); // recebe o valor do usuário
        // vetor recebe o elemento
        vetorA[i] = elemento * 3; // adiciona o valor do elemento ao vetor
        vetorB[i] = elemento;
        vetorC[i] = vetorA[i] - vetorB[i];
        // se os valores forem maiores que zero faça
        if (elemento > 0)
        {
            /* soma os valores positivos */
            total += vetorC[i];
            positivos++;
        } else {
            // conta os valores negativos
            negativos++;
        } // end else
        
        // maior e menor recebem o valor do vetor zero
        maior = vetorC[0];
        menor = vetorC[0];
    } // end for inicializa

    // cabeçalho
    printf("vetorC original = { ");
    // loop for para exibir o vetor
    for(int i = 0; i < INDICE; i++) {
        // exibir
        printf("%d ", vetorC[i]);

        // se vetor maior que maior
        if (vetorC[i] > maior)
        {
            /* maior recebe o valor do vetor */
            maior = vetorC[i];
        } // end if maior
        if (vetorC[i] < menor)
        {
            /* menor recebe o valor do vetor */
            menor = vetorC[i];
        } // end if menor
        
    } // end exibir
    printf(" }\n"); // fim do vetor

    // resultado
    printf("\ntotal dos valores positivos = %d\n", total);
    // exibe a média dos valores do vetor
    printf("média dos valores = %.2f\n", (float) total / INDICE);
    printf("Números positivos: %d\n", positivos);
    printf("Números negativos: %d\n", negativos);
    printf("O maior valor = %d\n", maior);
    printf("O menor valor = %d\n", menor);

    return 0; // end programa
} // end main