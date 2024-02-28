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
    depois -> minuto = 80;
    depois -> segundo = 50;

    int somatorio = 100;

    struct horario antes;
    antes.hora = somatorio + depois -> segundo;
    antes.minuto = agora.hora + depois -> minuto;
    antes.segundo = depois -> minuto + depois -> segundos;

    printf("%i:%i:%i", antes.hora, antes.minuto, antes.segundo);

    return 0;
}