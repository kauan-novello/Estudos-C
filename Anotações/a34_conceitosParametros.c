#include <stdio.h>

void funcaoPrint(int x, int vetor[]);

int main(){

    int x = 10;
    int vetor[1] = {10};

    funcaoPrint(x, vetor); // perceba que vetor não precisa se passar o tamanho

    printf("Varivavel X na funcao main eh %d \n", x);
    printf("Vetor na funcao main eh %d \n\n", vetor[0]);

    return 0;
}

void funcaoPrint(int x, int vetor[]){

    x +=10; //atribui +10 a x, porém x aqui é uma varivel local clonada
    vetor[0] = 20; //atribui o valor 20 a 1ª posição no vetor, porém o vetor aqui não é um clone

    printf("Varivavel X na funçãoPrint eh %d \n", x);
    printf("Vetor na funçãoPrint eh %d \n\n", vetor[0]);

}