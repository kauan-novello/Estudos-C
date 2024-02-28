#include <stdio.h>

int main(){


    int fatorial = 5, resposta = 1;

    for(/*É permitido que a inicialização seja vazia*/; fatorial >= 1; --fatorial){ //padrão: for(inicialização; condição; incremento){ do; }       Atenção no usos dos ";"
        resposta *= fatorial;
    }

    printf("O numero fatorial eh %d\n", resposta);
    return 0;

}