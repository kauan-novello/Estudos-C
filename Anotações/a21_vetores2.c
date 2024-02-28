#include <stdio.h>

int main(){
     
    float notas[5] = {0}; // {0,0,0,0,0}
    float total = 0;    
    float media = 0;

    printf("Insira 5 notas:\n");
    
    for (int i = 0; i < 5; i++){ //primeiro for para receber as 5 notas
        scanf("%f", &notas[i]);
    }
    for (int i = 0; i < 5; i++){// segundo for para somar todas as notas do array
        total += notas[i];
    }

    media = total / 5;

    printf("A media dos alunos eh %f", media);
    

    return 0;
}