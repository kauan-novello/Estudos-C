#include <stdio.h>

int main(){

    // malloc    calloc    realloc    free  |   sizeof

    // sizeof é uma função q retorna em Bytes o tamanho de uma variavel, array ou struct


    int v[10];

    printf("%li bits", sizeof(v) * 8);

    return 0;
}