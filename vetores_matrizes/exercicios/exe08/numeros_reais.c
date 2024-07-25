/*
    8) Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule e mostre na tela a quantidade de números negativos e a soma dos números positivos desse vetor. 
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
    float elemento = 0.0; // elemento do vetor
    float total = 0.0; // soma os valores do vetor
    float maior = 0.0; // maior valor do vetor
    float menor = 0.0; // menor valor
    int positivos = 0; // números positivos
    int negativos = 0; // números negativos
    
    // vetor
    float vetor[INDICE]; // vetor para x elementos
    
    // loop for para entrada de dados e inicializar o vetor
    for(int i = 0; i < INDICE; i++) {
        // entrada dos dados
        printf("Informe o %d valor inteiro: ", i + 1);
        scanf("%f", &elemento); // recebe o valor do usuário
        // vetor recebe o elemento
        vetor[i] = elemento; // adiciona o valor do elemento ao vetor

        // se os valores forem maiores que zero faça
        if (elemento > 0.0)
        {
            /* soma os valores positivos */
            total += vetor[i];
            positivos++;
        } else {
            // conta os valores negativos
            negativos++;
        } // end else
        
        // soma os elementos
        total += vetor[i];
        // maior e menor recebem o valor do vetor zero
        maior = vetor[0];
        menor = vetor[0];
    } // end for inicializa

    // cabeçalho
    printf("vetor original = { ");
    // loop for para exibir o vetor
    for(int i = 0; i < INDICE; i++) {
        // exibir
        printf("%.2f ", vetor[i]);

        // se vetor maior que maior
        if (vetor[i] > maior)
        {
            /* maior recebe o valor do vetor */
            maior = vetor[i];
        } // end if maior
        if (vetor[i] < menor)
        {
            /* menor recebe o valor do vetor */
            menor = vetor[i];
        } // end if menor
        
    } // end exibir
    printf(" }\n"); // fim do vetor

    // resultado
    printf("\ntotal dos valores positivos = %.2f\n", total);
    // exibe a média dos valores do vetor
    printf("média dos valores = %.2f\n", total / INDICE);
    printf("Números positivos: %d\n", positivos);
    printf("Números negativos: %d\n", negativos);
    printf("O maior valor = %.2f\n", maior);
    printf("O menor valor = %.2f\n", menor);

    return 0; // end programa
} // end main