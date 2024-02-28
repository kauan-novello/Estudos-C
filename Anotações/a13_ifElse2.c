#include <stdio.h>

int main(){

    int idade;
    printf("Informar idade\n");
    scanf("%d", &idade);

    // notação operadores lógicos '&&' = e, '||' = ou

    if (idade <= 5 && idade > 0){
        printf("bebe\n");
    } else if(idade <= 10 && idade > 5){
        printf("crianca\n");
    } else if(idade <= 50 && idade > 10){
        printf("adulto\n");
    } else if(idade <= 200 && idade > 50){
        printf("idoso\n");
    } else{
        printf("ser mitologico\n");
    }

}