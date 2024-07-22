/*
    2) Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos na ordem inversa.
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
    // vetor
    int vetor[indice]; // vetor para 6 elementos
    
    // loop for para entrada de dados e inicializar o vetor
    for(int i = 0; i < indice; i++) {
        // entrada dos dados
        printf("Informe o %d valor inteiro: ", i + 1);
        scanf("%d", &elemento); // recebe o valor do usuário
        vetor[i] = elemento; // adiciona o valor do elemento ao vetor
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
    
    return 0; // end programa
} // end main