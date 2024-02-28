#include <stdio.h>                                              // incluindo biblioteca de entrada e saida

int main(){                                                     // inicia a função main
    
    int num1, num2;                                             //declara dois inteiros

    printf("Digite os 2 numeros que serao ultilizados: \n");    // pergunta quais serão os numeros
    scanf("%d \n %d", &num1, &num2);                            // armazena o valor dos dois inteiros 

    //printf("Num1: %d \nNum2: %d \n", num1, num2);             // printa os numeros escolhidos

    if (num1 == num2)                                           // verifica se num1 é igual a num2
       printf("%d e %d sao iguais\n", num1, num2);              //se sim, printa...

    if (num1 != num2)                                           // verifica se num1 é diferente de num2
        printf("%d e %d sao diferentes\n", num1, num2);         //se sim, printa...

    if (num1 < num2)                                            // verifica se num1 é menor que num2
        printf("%d eh menor que %d\n", num1, num2);             //se sim, printa...

    if (num1 > num2)                                            // verifica se num1 é maior que num2
        printf("%d eh maior que %d\n", num1, num2);             //se sim, printa...
    
    return 0;                                                   //finaliza a função
}