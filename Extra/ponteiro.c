#include <stdio.h>
#include <stdlib.h>

int main(){

    int * ptr;
    int valor = 10;

    ptr = &valor;
    
    printf("%x \n", ptr);
    printf("%d \n", *ptr);

    printf("%d \n", valor);
    printf("%x \n", &valor);


}