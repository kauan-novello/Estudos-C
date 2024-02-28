#include <stdio.h>

void qualquerNome(int n, int matriz[n][n]);

int main(){
    int x;

    scanf("%d", &x);

    int matrizX[x][x];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {;
            scanf("%d", &matrizX[i][j]);           
        }
    }

    qualquerNome(x, matrizX);
    return 0;
}

void qualquerNome(int n, int matriz[n][n]){

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (matriz[i][j] != matriz[j][i]){
                printf("Não");
                return;
            }
        }
    }

    printf("Sim");
    return;
}