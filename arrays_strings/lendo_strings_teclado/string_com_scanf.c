/*
*/
#include <stdio.h>
#include <stdlib.h>
int main() {

    // array para 10 caracteres (string)
    char nome[10] = "";

    printf("Array para 10 caracteres.\nchar nome[10] = \"\";");

    // entrada de dados
    printf("\nDigite seu nome completo: ");
    printf("\nLer os caracteres digitados pelo usuario:");
    printf("\nscanf(\"%%s\", nome);\n");
    // lâ uma string digitada pelo usuário
    scanf("%s", nome);
/*
    // exibe a string digitada
    printf("Seu nome: %s", nome);

    // explicação
    printf("\nApenas os caracteres digitados antes do primeiro espaço\nencontrado serão armazenados na string\n");
    
    system("pause");
*/
    return 0;
}