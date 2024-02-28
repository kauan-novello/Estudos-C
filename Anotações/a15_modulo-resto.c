#include <stdio.h>

int main (){
    int num1, num2;
    printf("Digite 2 Numeros Inteiros: ");
    scanf("%d %d", &num1, &num2);

    if (num2 == 0){
        printf("Divisão por 0 nao permitido. \n");
    } else {
        if (num1 % num2 == 0){
            printf("%d eh divisivel por %d", num1, num2);
        } else{
            printf("%d nao eh divisivel por %d", num1, num2);
        }
        
    }
    
}