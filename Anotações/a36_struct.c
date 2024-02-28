#include <stdio.h>

int main(){

    struct horario{  // crie um tipo de variavel "horario"

        int horas;      //designei suas subsvariveis
        int minutos;
        int segundos;
    
    };
    
    struct horario agora; // criei uma variivel "agora" do tipo "horario"
    
    agora.horas = 15;   // atribui valor a minha variavel em suas subs variaveis
    agora.minutos = 17;
    agora.segundos = 30;

    printf("%d:%d:%d\n", agora.horas, agora.minutos, agora.segundos);   // printei de acordo com as subsvariaveis

    return 0;
}