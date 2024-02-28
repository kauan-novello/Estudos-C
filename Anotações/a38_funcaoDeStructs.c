#include <stdio.h>

struct horario{  // dessa vez a struct foi declarada fora da main para q tenha acesso global

    int horas;
    int minutos;
    int segundos;

};

struct horario teste(struct horario x);
// tipo de dado | nome da função(parametro de recebimento){}


int main(){

    struct horario agora; // cria varivel "agora" do tipo "horario"

    agora.horas = 10;
    agora.minutos = 42;
    agora.segundos = 58;

    struct horario proxima; // cria varivel "proxima" do tipo "horario"
    proxima = teste(agora); // proxima recebe o retorno da função teste com parametro de "agora"

    printf("%d:%d:%d\n", proxima.horas, proxima.minutos, proxima.segundos);

    return 0;
}

struct horario teste(struct horario x){

    printf("%d:%d:%d\n", x.horas, x.minutos, x.segundos);
    
    x.horas = 00;
    x.minutos = 00;
    x.segundos = 00;

    return x;
};
