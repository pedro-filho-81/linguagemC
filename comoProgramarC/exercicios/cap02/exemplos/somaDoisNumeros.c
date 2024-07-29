/*
    Figura 2.5: fig02_05.c
    Programa de adi��o
    Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 24). Edi��o do Kindle.
    Autor:
*/
#include <stdio.h>

int main()
{
    // vari�veis
    int numero1; // primeiro valor a ser informado pelo usu�rio
    int numero2; // segundo valor a ser informado pelo usu�rio
    int soma; // soma os dois n�meros informado pelo usu�rio

    printf( "Digite o primeiro numero: " ); // prompr
    scanf( "%d", &numero1 ); // l� um n�mero

    printf( "Digite o segundo numero: " ); // prompt
    scanf( "%d", &numero2 ); // l� um n�mero

    soma = numero1 + numero2; // atribui o total a soma

    printf( "A soma e %d\n", soma ); // imprime soma

    return 0; // fim do programa
} // fim main