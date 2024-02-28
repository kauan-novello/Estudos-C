#include <stdio.h>

int main(){

    int vetorNotas[5] = {0,1,2,3,4}; // contém 5 espaços mas vai de 0 a 4

    // int vetorNotas[5] = {0}; Serviria pra atribuir 0 a todos os itens do vetor

    /*
        vetorNotas[0] = 1;
        vetorNotas[1] = 2;
        vetorNotas[2] = 3;
        vetorNotas[3] = 4;
        vetorNotas[4] = 5;
        
        Isso pode ser substituido por vetorNotas[5] = {1,2,3,4,5}
    */
   
    /* Como printar?
        printf("%?", vetorNotas); 
        para printar isso seria preciso de um loop que printasse elemento por elemento dentro do vetor como no exxemplo abaixo
    */
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetorNotas[i]);
    }
    return 0;
}