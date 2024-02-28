#include <stdio.h>

int main(){

    int idade;

    printf("Informe a Idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18){
        printf("pode beber");
    }
    else{
        printf("não pode beber");
    }       
}

/*Como no caso acima os Do's só tem uma linha pode se ultilzar sem as chaves { }
    if (idade >= 18)
        printf("pode beber");
    else
        printf("não pode beber");    
*/