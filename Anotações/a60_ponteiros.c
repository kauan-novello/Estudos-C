#include <stdio.h>

int main(){

    const int x = 10; // Coloquei const apenas para mostra que se você tem um ponteiro que não é constante apontando para uma variável constante, você pode usar esse ponteiro para modificar o valor da variável referenciada.
    int y = 20;
    int *ponteiro;

    ponteiro = &x; // ponteiro aponta pro endereço de x, logo qualquer valor gravado no ponteiro é espelhado em x
    *ponteiro = y; // valor do ponteiro recebe y e consequentemente grava em x

    // logo x e y são iguais a 20

    printf("%d %d", x, y);
}