#include <stdio.h>

int main() {
    const int alunos = 4;
    const int notas = 4;

    int matriz[alunos][notas];
    float vetorMedia[alunos];

    float medio = 0;

    // Loop para scanear valor a todos os elementos da matriz
    for (int i = 0; i < alunos; i++) {
        printf("Digite as notas do aluno %d\n", i+1);
        for (int j = 0; j < notas; j++) {
            printf("%da nota: ", j+1);
            scanf("%d", &matriz[i][j]);           
        }
        printf("\n");
    }
    // Print da matriz
    for (int i = 0; i < alunos; i++) {
        for (int j = 0; j < notas; j++) {
            printf("[%d]", matriz[i][j]);            
        }
        printf("\n");
    }
    

    return 0;
}
