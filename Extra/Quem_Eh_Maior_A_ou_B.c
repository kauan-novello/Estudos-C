#include <stdio.h>

int main(){

    int a, b;
    printf("Digite 2 Numeros: ");
    scanf("%d %d", &a, &b);    
    
    if (a > b) {
        printf("%d eh maior", a);
    } else if ( a == b) {
        printf("%d e %d sao iguais", a, b);
    } else {
        printf("%d eh maior", b);
    }
    return 0;

}