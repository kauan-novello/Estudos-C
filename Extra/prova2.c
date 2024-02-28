#include <stdio.h>

int main(){
    
    int numPs = 2; // eram 10 na prova fiz assim pra testar

    struct paciente{
        char nome[50];
        float peso;
        float altura;
        int idade;
    };

    struct paciente arrayPacientes[numPs];
    for (int i = 0; i < numPs; i++){
        scanf("%s", arrayPacientes[i].nome);
        scanf("%f", &arrayPacientes[i].peso);
        scanf("%f", &arrayPacientes[i].altura);
        scanf("%d", &arrayPacientes[i].idade);
    }

    for (int i = 0; i < numPs; i++)
    {
        printf("%s\t %.2f\n %.2f\n %d\t", arrayPacientes[i].nome , arrayPacientes[i].peso, arrayPacientes[i].altura, arrayPacientes[i].idade);
    } 

    return 0;
}