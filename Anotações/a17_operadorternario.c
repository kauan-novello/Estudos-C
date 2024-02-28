#include <stdio.h>

int main(){
    int num1 = 100, num2 = 20, resposta;
    num1 < num2 ? printf("Sim \n") : printf("Nao \n");
    resposta = num1 < num2 ? 10 : -10;

    printf("%d\n", resposta);

    return 0;
}