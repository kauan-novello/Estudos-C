#include <stdio.h>

int tamanhoString(char string[]);

int main(){

    char stringUsuario[20];
    
    printf("Digite uma Palavra: "); scanf("%s", stringUsuario);

    int num = tamanhoString(stringUsuario);
    num += 1; // contando o \0
    
    printf("\n a string %s possui %d caracteres", stringUsuario, num);
    return 0;
}

int tamanhoString(char string[]){
    int numCaractere = 0;
    while (string[numCaractere] != '\0')
    {
        ++numCaractere;
    }
    return numCaractere;
}