#include <stdio.h>

int main(){

    int numero, cifra;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero >= 0){
        
        do {
            cifra = numero % 10;
            printf("%d", cifra);
            numero /= 10;
        } while (numero != 0);
        printf("\n");

    } else if (numero < 1){

        numero = numero * -1; // para numeros negativos ele multiplica por -1 oq se torna o numero positivo, ele inverte ele positivo
        printf("-"); // adiciona o menos a frente

        do {
            cifra = numero % 10;
            printf("%d", cifra);
            numero /= 10;
        } while (numero != 0);
        printf("\n");
        
    }

    return 0;
}