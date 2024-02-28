#include <stdio.h>

int main(void)
{

    struct horario
    {
        int hora;
        int minuto;
        int segundo;
    };
    struct horario agora;
    struct horario *depois;

    depois = &agora;

    (*depois).hora = 10;
    (*depois).minuto = 10;
    (*depois).segundo = 10;

    depois -> hora = 20;
    depois -> minuto = 20;
    depois -> segundo = 20;
    
    printf("%i:%i:%i", agora.hora, agora.minuto, agora.segundo);

    

    return 0;
}