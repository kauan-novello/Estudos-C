#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    int *p;
    p = (int *) calloc(5, sizeof(int));

    // a diferença entre calloc e malloc é q o calloc limpa toda a sujeira de sistema atribuindo o valor 0 ao espaço alocado
    // e na usa sintaxe o recebe mais um argumento q é a qtd de vezes q ira alocar

    *(p+1) = 10;
    p[2] = 20; // podemos tratar como vetores

    printf("%i %i", p[1], *(p+2));

    return 0;
}
