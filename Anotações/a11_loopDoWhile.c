/* 
    A diferença semântica entre o o while e o DoWhile 
    é que o while primeiro verifica a condição e caso seja True ele roda o Do
    Já o DoWhile ele primero roda o Do (independente da condição) 
    pra só então ele ler a condição e após isso verificar se vai rodar novamente ou não.
*/
#include <stdio.h>
int main(){
    int i = 0;
    do {
        printf("Teste\n");
    } while(i != 0);
}

// Veja que no exemplo acima mesmo i não sendo != 0 ele printou  