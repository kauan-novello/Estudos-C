#include <stdio.h>

int main(){

    int a[5] = {1,2,3,4,5};
    int soma = 0;

    for (int i = 0; i < 5; i++){
        soma += a[i];
    }
    
    printf("%d", soma);

}