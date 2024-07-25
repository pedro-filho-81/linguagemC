#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    /*
        A linguagem C não possui um tipo String para criar a variáveis de string. 
        Em vez disso, você deve usar o tipo CHAR e criar uma matriz de caracteres 
        para formar uma string em C:
    */
    // cria uma string
    // toda string deve está entre aspas duplas ( "" )
    char olamundo[] = "Hello world!"; // cria um array char que recebe a string
    printf("\nDeclara, cria e inicializa uma string");
    printf("\nchar olamundo[] = \"Hello world!\";");
    // Para imprimir um string, você pode usar a função printf() junto com 
    // o especificador (%s) de formato para dizer a C que agora estamos 
    // trabalhando com strings:
    printf("\nImprime uma string.");
    printf("\nprintf(\"%%s%%n\",olamundo);\n");
    // imprime a string
    printf("%s%n",olamundo);
    return 0;
}
