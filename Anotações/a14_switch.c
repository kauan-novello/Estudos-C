#include <stdio.h>

int main(){
    int i;

    printf("Digite um numero de 1 a 5: ");
    scanf("%d", &i); //lembrar de usar o & pra atribuir do valor no endereço de i

    switch (i)
    {
    case 1:
        printf("Primeiro\n");
        break;
    case 2:
        printf("Segundo\n");
        break;
    case 3:
        printf("Terceiro\n");
        break;
    case 4:
        printf("Quarto\n");
        break;
    case 5:
        printf("Quinto\n");
        break;
    default:
        printf("Num Invalido\n");
        break;
    }

    return 0;
}