/*
    declare, cria, inicializa e imprime um caractere
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // declara, cria e inicializa um caractere
    // para caractere usa-se aspas simples
    // letras, simbolos, números dentro de aspas simples
    // são caracteres
    printf("\nO tipo ( caractere ) deve estar entre aspas simples,\ncomo 'A' ou 'c', e usa-se o especificador de \nformato ( %%c ) para imprimi-lo:");
    char caractere = 'a'; // ou 'A'
    printf("\nchar caractere = 'a';");
    printf("\nImprime a letra = %c", caractere);
    char numero = 65; // caractere
    printf("\n\nchar numero = 65;");
    printf("\nImprime o numero  = %c", numero);
    printf("\nNumero 65 = %d\n", numero);
}