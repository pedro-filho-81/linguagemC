// bibliotecas C
#include <stdio.h> // para entrada e saída
#include <stdlib.h> // para instrução system
#include <locale.h> // para configurar a região

int main()
{
   // configura para português do Brasil
   setlocale(LC_ALL, "portuguese");
   printf("Variáveis:\n"); // exibe cabeçalho
   int x; // declara a variável mas não define o valor
   printf("x = %d%n", x); // imprime o valor de x
   x = 5; // define o valor de x como sendo 5
   printf("\nx = %d%n", x); // imprime o valor de x

   return 0; // retorna zero, programa terminado com sucesso.
} // end main
