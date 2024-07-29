#include <stdio.h>
#include <stdlib.h>
/*
    média de notas de 5 alunos
*/
int main(void) {

    float n1,n2, n3, n4, n5;
    printf("Digite as notas de 5 alunos: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    scanf("%f", &n5);
    float media = (n1 + n2 + n3 + n4 + n5) / 5;
    printf("media = %.1f\n", media);
    if(n1 > media) printf("nota1: %.1f\n", n1);
    if(n2 > media) printf("nota2: %.1f\n", n2);
    if(n3 > media) printf("nota3: %.1f\n", n3);
    if(n4 > media) printf("nota4: %.1f\n", n4);
    if(n5 > media) printf("nota5: %.1f\n", n5);
    system("pause");
    return 0;
} // end 