#include <stdio.h>

int main(){

    int base, altura, area;

    printf("Digite o valor da base: ");
    scanf("%d", &base);

    printf("Digite o valor da altura: ");
    scanf("%d", &altura); // padrão: scanf("Texto %tipoDaVariavel", &nomeDaVariavel);

    area = base * altura;

    printf("Valor da area e %d", area);

    return 0;
}