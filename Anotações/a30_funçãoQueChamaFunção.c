#include <stdio.h>

int main(){

    float somaDeDigitos(float num1, float num2);
    float a, b, soma;

    printf("Digite 2 numero: ");
    scanf("%f %f", &a, &b);

    soma = somaDeDigitos(a, b);

    printf("a soma é %f", soma);

    return 0;
}

float somaDeDigitos(float num1, float num2){

    float modulo(float x);

    if (num1 <0){
        num1 = modulo(num1);
    }if (num2 <0){
        num2 = modulo(num2);
    }
    
    return num1 + num2;
}

float modulo(float x){
    return x * -1;
}