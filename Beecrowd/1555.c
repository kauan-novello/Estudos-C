/*

    Funções

    Na última aula de matemática, Rafael, Beto e Carlos aprenderam algumas novas funções matemáticas. 
    Cada um deles se identificou com uma função em especial, e resolveram competir para ver quem tinha a função de maior resultado.

    A função que Rafael escolheu é r(x, y) = (3x)² + y².

    Já Beto escolheu a função b(x, y) = 2(x²) + (5y)².

    Carlos, por sua vez, escolheu a função c(x, y) = -100x + y³.

    Dados os valores x e y, diga quem escolheu a função com o maior resultado.

    Entrada
    A primeira linha de entrada contém um inteiro N que determina a quantidade de casos de teste. 
    Cada caso de teste consiste em dois inteiros x e y (1 ≤ x, y ≤ 100), indicando as variáveis a serem inseridas na função.

    Saída
    Para cada caso de teste imprima uma linha, contendo uma frase, indicando quem ganhou a competição. Por exemplo, se Rafael ganhar a competição, imprima “Rafael ganhou”. Assuma que nunca haverá empates.

*/

#include <stdio.h>
#include <math.h>

int r(int x, int y);
int b(int x, int y);
int c(int x, int y);

char* qualMaior(int carlos, int beto, int rafael);

int main(){

    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){ //faça N casos de teste
        
        int x, y;

        scanf("%d %d", &x,&y);
        
        int rafael = r(x,y);
        int beto = b(x,y);
        int carlos = c(x,y);

        char* maior = qualMaior(carlos, beto, rafael);

        printf("%s\n", maior);
    }
}

int r(int x, int y){ return (3 * x) * (3 * x) + y * y;}
int b(int x, int y){ return 2 * pow(x, 2) + pow(5 * y, 2);}
int c(int x, int y){ return -100 * x + pow(y, 3);}

char* qualMaior(int carlos, int beto, int rafael) {
    if (beto > carlos && beto > rafael) {
        return "Beto ganhou";
    } else if (carlos > beto && carlos > rafael) {
        return "Carlos ganhou";
    } else if (rafael > beto && rafael > carlos) {
        return "Rafael ganhou";
    }
}