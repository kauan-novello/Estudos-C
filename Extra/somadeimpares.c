#include <stdio.h>
 
int main() {
 
    int x, y;
    int soma;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    int maior = x > y ? x : y;
    int menor = x < y ? x : y;
    
    //printf("Maior: %d\n", maior);
    //printf("Menor: %d\n", menor);

    for(int i = ++menor; i < maior; i++){
        if(i % 2 != 0){
            soma += i;
            //printf("%d + ", i);
        }
    }

    printf("%d", soma);

    return 0;
}