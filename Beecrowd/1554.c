/*
    Existem muitas variantes de jogos de bilhar. 
    A UFFS (União Federal dos Fãs de Sinuca) resolveu desenvolver uma nova variante, denominada N + 1.

    Essa variante consiste em, numa mesa de bilhar padrão, 
    tacar a bola branca para acertá-la na bola mais próxima dela, dentre as N possíveis. 
    O jogo é vencido pelo jogador que completar mais acertos após 50 jogadas.

    Como a dificuldade do jogo está em descobrir qual das N bolas é a mais próxima da branca, 
    sua tarefa é escrever um programa que ajude os juízes da partida.

    Entrada
    Existem vários casos de teste. 
    A primeira linha contém um inteiro C que determina a quantidade de casos de teste que vem a seguir. 
    Para cada caso de teste, a entrada começa com um inteiro N (1 ≤ N ≤ 50), 
    que define o número de bolas disponíveis, além da branca. As próximas N + 1 linhas possuem dois inteiros, 
    x e y, separados por um espaço em branco, indicando a posição (x, y) das bolas no plano da mesa, 
    uma bola por linha (0 < x < 1420 mm e 0 < y < 2840 mm). A primeira linha indica a posição da bola branca. 
    As demais linhas indicam a posição das bolas 1, 2, 3, . . . , N-1, N nesta ordem.

    Saída
    Para cada caso de teste deve ser mostrada uma linha contendo apenas o número da bola que está mais próxima da branca. 
    A margem de erro aceitável é de 0,01 mm. Havendo empate, deve-se mostrar aquela de menor número. 
    Sempre finalize uma linha com o caractere nova linha (\n).

*/

#include <stdio.h>
#include <math.h>

struct Coordenadas {
    int x, y;
};

int main() {
    
    int c;
    scanf("%d", &c); //casos de teste

    while (c--) {
        
        int n; //numero de pontos
        scanf("%d", &n);

        struct Coordenadas bolas[n + 1]; // um array de estruturas para armazenar as coordenadas das bolas
        double perto = 999999999.0; // distância máxima 
        int posicao = -1; // o ponto mais próximo

        for (int i = 0; i <= n; i++) {
            scanf("%d %d", &bolas[i].x, &bolas[i].y);
        }

        for (int i = 1; i <= n; i++) {
            double dist = sqrt(pow(bolas[0].x - bolas[i].x, 2) + pow(bolas[0].y - bolas[i].y, 2)); // distância euclidiana
            if (dist < perto) { // se for menor que a distância máxima
                perto = dist;
                posicao = i;
            }
        }

        printf("%d\n", posicao);
    }

    return 0;
}