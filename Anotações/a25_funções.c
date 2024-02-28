#include <stdio.h>


void imprimaMensagem2(){ //descrição da função
    printf("\nteste2");
}

int main(){

    void imprimaMensagem(); //declara a função (faz o compilador ler a função)
    
    imprimaMensagem();  //chama a função
    imprimaMensagem2(); //

    return 0;
}

void imprimaMensagem(){ //descrição da função
    printf("teste");
}

/*
    Se uma função for descrita antes da main não é necessario declara-la antes de chamar,
    uma vez que o compilador já ler a função antes da main e não retorna erro
*/