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
    printf("\nO tipo caractere CHAR deve estar entre aspas simples,\ncomo 'A' ou 'c', e usa-se o especificador de \nformato ( %%c ) para imprimi-lo:\n");
    
    char caractere = 'a'; // ou 'A'
    printf("\nchar caractere = 'a';");
    printf("\nUsando %%c Imprime a letra = %c", caractere);
    printf("\nUsando %%d Imprime o numero = %d", caractere);
    
    char numero = 65; // caractere
    printf("\n\nchar numero = 65;");
    printf("\nUsando %%c Imprime a letra = %c", numero);
    printf("\nUsando %%d imprime o numero = %d\n", numero);
} // end main