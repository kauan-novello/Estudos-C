#include <stdio.h>

int main(){

    int x = 10;
    double y = 20.50;
    char z = 'a';

    // int *pX;
    // pX = &x;

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    printf("%d %d\n", pX, *pX);

    int soma = *pX + *pY;
    printf("%d\n", soma);

    int *resultado;
    resultado = -1405093356;
    printf("%d", *resultado);
}