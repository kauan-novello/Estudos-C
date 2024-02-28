#include <stdio.h>

int main(){

    int contador = 1;

    while (contador <= 5){           //padrão while(condição){ do; }
        printf("%d\n", contador);
        contador++;
    }
    
}

/* Operadores de condição/comparação:

    '==' igual 
    '!=' diferente
    '>=' maior igual
    '<=' menor igual
    
    */


    /* importante saber diferenciar a pós-incrementação da pré-incrementação

    int i = 5;
    int result = i++;
    Neste exemplo, i = 6 e result = 5 
    
    int i = 5;
    int result = ++i;
    Neste exemplo, i = 6 e result = 6
    
        Na questão acima não iria mudar mas é importante saber diferenciar

    */