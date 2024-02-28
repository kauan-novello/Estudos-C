#include <stdio.h>
//por enquanto não iremos usar a biblioteca string.h para aprender a fundo como funciona em C

int main(){

    char string[] = {'b','r','a','s','i','l'};

    for (int i = 0; i < 6; i++)
    {
        printf("%c", string[i]);
    }
    
    return 0;
}