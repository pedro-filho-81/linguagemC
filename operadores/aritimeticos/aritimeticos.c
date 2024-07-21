#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // configura a localização
    setlocale(LC_ALL, "Portuguese");

    // variáveis com o operador de atribuição ( = )
    int x = 5; // x recebe 5
    int y = 3; // y recebe 3
    int z; // declara z
    
    printf("int x = %d\nint y = %d\n", x, y);
    printf("Operadores Aritiméticos\n");
    z = x + y; // z recebe a soma de x+y
    // imprime a soma
    printf("Adição => %d + %d = %d%n", x, y, z);
    
    z = x - y; // z recebe a subtração de x - y
    // imprime a subtração
    printf("\nSubtração => %d - %d = %d%n", x, y, z);
    
    z = x * y; // z recebe a multiplicação de x+y
    // imprime a multiplicação
    printf("\nmultiplicação => %d x %d = %d%n", x, y, z);
    
    z = x / y; // z recebe a divisão de x / y
    // imprime a divisão
    printf("\nDivisão => %d / %d = %d%n", x, y, z);
    
    z = x % y; // z recebe a resto da divisão x % y
    // imprime o resto da divisão
    printf("\nResto da divisão => %d %% %d = %d%n", x, y, z);
} // end main