#include <stdio.h>

int fatorial(int x); // Movido para fora da função main

int main() {
    int numero, resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("O fatorial de %d eh %d\n", numero, resultado);

    return 0;
}


int fatorial(int x) {
    int resultado;

    if (x == 0) {
        resultado = 1;
    } else {
        resultado = x * fatorial(x - 1);
    }

    return resultado;
}
