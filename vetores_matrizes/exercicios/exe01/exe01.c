/*
    1) Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos.
    Backes, André. Linguagem C - Completa e Descomplicada (Portuguese Edition) (p. 128). GEN LTC. Edição do Kindle. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    // declara vetor
    const int indice = 6; // número de elementos do vetor
    int elemento = 0; // elemento do vetor
    int vetor[indice]; // vetor para 6 elementos
    // loop for para inicializar o vetor
    for(int i = 0; i < indice; i++) {
        printf("Informe o %d valor inteiro: ", i + 1);
        scanf("%d", &elemento);
        vetor[i] = elemento;
    } // end for inicializa

    // cabeçalho
    printf("vetor = { ");
    // loop for para exibir o vetor
    for(int i = 0; i < indice; i++) {
        // exibir
        printf("%d ", vetor[i]);
    } // end exibir
    printf(" }\n"); // fim do vetor
    return 0; // end programa
} // end main