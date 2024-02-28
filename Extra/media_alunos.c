#include <stdio.h>

int main(){
    int contador = 1;
    float nota, total = 0, media;

    int num_alunos = 40;

    while (contador<= num_alunos){
       printf("Digite nota do aluno %d: ", contador);
       scanf("%f", &nota);
       total += nota; //total = total + nota;
       contador++; //contador += 1 ou contador = contador + 1; 
    }

    media = total/num_alunos;
    printf("A media da turma eh %.2f\n", media); // %.2f == imprime a media com apenas duas dizimas

    return 0;    
}