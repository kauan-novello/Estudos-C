#include <stdio.h>

int main(){

    int x = 16;
    int y = 3;
    
    //float resultado = x / y; 
    // isso retornaria 5 pois apesar de resultado ser float ele tá recebendo uma divisão entre inteiros
    
    // para q a divisão retorne em decimal é necessario um "Casting" para float
    float resultado = (float)x / y; // dessa forma

    printf("%f", resultado);

    return 0;
}