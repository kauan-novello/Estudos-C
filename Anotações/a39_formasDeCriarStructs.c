#include <stdio.h>

int main(){

    /*struct horario{  
        int horas;      
        int minutos;
        int segundos;
    };
    
    struct horario agora;               
    
    agora.horas = 15;   
    agora.minutos = 17;
    agora.segundos = 30;
    
    AO INVÉS DE TUDO ISSO EU PODERIA FAZER:
    */
    struct horario{  
        int horas;      
        int minutos;
        int segundos;
    }agora = {15,17,30};

    struct horario novo = {.minutos = 10};

    printf("%d:%d:%d\n", agora.horas, agora.minutos, agora.segundos); 
    printf("%d:%d:%d\n", novo.horas, novo.minutos, novo.segundos); 

    return 0;
}