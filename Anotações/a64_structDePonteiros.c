#include <stdio.h>

int main(void){

    struct horario
    {
        int *pHora;
        int *pMinuto;
        int *pSegundos;
    } hoje;

    int hora = 200, minuto = 300, segundo = 400;

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundos = &segundo;

    printf('%i %i %i', *hoje.pHora, *hoje.pMinuto, *hoje.pSegundos);

    *hoje.pSegundos = 1000;

    printf("%i", *hoje.pSegundos);

    return 0;

}