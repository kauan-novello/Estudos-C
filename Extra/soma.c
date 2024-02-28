#include <stdio.h> //incluindo biblioteca de entrada e saida

int main(){                                                 // inicia a função main
    int int1, int2, soma;                                   // declarando 3 variavéis do tipo inteiro 

    printf("Digite o 1 numero:\n");                         //printa...
    scanf("%d", &int1);                                     // receba um dado do tipo 'd' e aloque na memoria de int1
    printf("Digite o 2 numero:\n");                         //printa...
    scanf("%d", &int2);                                     // % refe-se ao tipo de dado e & a alocação de memoria
    
    soma = int1 + int2;                                     // unico sinal de = significa recebe ou seja soma recebe o valor da soma dos dois inteiros
    printf("A soma eh igual a %d\n", soma);                 //printa o valor que está alocado em soma

    return 0;                                               //finaliza a função
}