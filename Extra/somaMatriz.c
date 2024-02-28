#include <stdio.h>
//exemplo de soma de matrizes

int main(void) {
  
  int i,j;
  int matriz_A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  int matriz_B[3][3] = {{9,8,7},{3,2,1},{6,5,4}};
  int matriz_C[3][3];

  for(i=0;i<3;i++){ //soma elemento por elemento
    for(j=0;j<3;j++){
      matriz_C[i][j] = matriz_A[i][j] + matriz_B[i][j];
    }
  }

  printf("==== Matriz soma ====\n");
  for(i=0;i<3;i++){
    printf("|\t");
    for(j=0;j<3;j++){
      printf("%d\t",matriz_C[i][i]);
    }
    printf("|\n");
  }
  
  return 0;
}