#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   // variáveis
   int a = 12345; // valor decimal
   int b = 0435; // valor octal
   int c = 0x1fa; // valor hexadecimal
   // imprime o valor decimal
    printf("valor decimal     12345 => a = %7d\n", a);
    // exibe o valor octal de 0435
    printf("valor octal        0435 => b = %7d\n", b);
    // exibe o valor hexedecimal de 0x1fa
    printf("valor hexedecimal 0x1fa => c = %7d\n", c);
    printf("\n"); // pula linha
    system("pause");
    // programa finalizado
    return 0;
} // end main
