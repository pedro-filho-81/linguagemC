// bibliotecas C
#include <stdio.h> // para entrada e sa�da
#include <stdlib.h> // para instru��o system
#include <locale.h> // para configurar a regi�o

int main()
{ // inicio do bloco
   setlocale(LC_ALL, "portuguese"); // configura para portugu�s do Brasil
   printf("Vari�veis:\n"); // exibe cabe�alho
   int x; // declara a vari�vel mas n�o define o valor
   printf("x = %d%n", x); // imprime o valor de x
   x = 5; // define o valor de x como sendo 5
   printf("\nx = %d%n", x); // imprime o valor de x
   system("pause"); // pausa o programa
   return 0; // retorna zero, programa terminado com sucesso.
} // end main
