#include <stdio.h>

int main(){

    int matriz [5][5] = {{ 1, 2, 3, 4, 5},
                         { 6, 7, 8, 9,10},
                         {11,12,13,14,15},
                         {16,17,18,19,20},
                         {21,22,23,24,25}}; 


    // for(int i = 0; i <= 4; i++){
    //     for(int j = 0; j <= 4; j++){
    //       printf("[%d]", matriz[i][j]);
    //     }
    //   printf("\n");
    // }

    for(int i = 0; i < 5; i++){
      printf("[%d]", matriz[i][0]);
      printf("\n");
    }

    return 0;
}


/* Formatação:            nome[vetor][elemento]

logo se eu peço printf("%d", matriz[i][0]);

vai se printar o elemento 0 do vetor i

também podemos ler como   nome[linhas][colunas] 
ou até mesmo como         nome[horizontal][vertical]

*/
