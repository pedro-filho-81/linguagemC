#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // variáveis
    int x = 5;
    int y = 10;
    
    printf("int x = %d\nint y = %d", x, y);
    printf("\nOperadores Relacionais");
    printf("\n1 = verdadeiro 0 = falso");
    printf("\n%d > %d: %d", x, y, (x > y));
    printf("\n%d >= %d: %d", x, y, (x >= y));
    printf("\n%d < %d: %d", x, y, (x < y));
    printf("\n%d <= %d: %d", x, y, (x <= y));
    printf("\n%d == %d: %d", x, y, (x == y));
    printf("\n%d != %d: %d", x, y, (x != y));

    return 0;
}