#include <stdio.h>

int main(){

    struct horario{  
        int horas;      
        int minutos;
        int segundos;
    };
    
    struct horario vetor[5];               
    
    for (int i = 0; i < 5; i++){
        vetor[i].horas = 10;
        vetor[i].minutos = 20;
        vetor[i].segundos = 30;
    }
    

    struct horario vetor2[5] = {{10,20,30},
                                {10,20,30},
                                {10,20,30},
                                {10,20,30},
                                {10,20,30}};



    printf("%d:%d:%d\n", vetor[0].horas, vetor[0].minutos, vetor[0].segundos);
    printf("%d:%d:%d\n", vetor2[0].horas, vetor2[0].minutos, vetor2[0].segundos);

    return 0;
}