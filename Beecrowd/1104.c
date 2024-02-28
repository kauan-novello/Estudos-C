/*

    Troca de Cartas

    Alice e Beatriz colecionam cartas de Pokémon. 
    As cartas são produzidas para um jogo que reproduz a batalha introduzida 
    em um dos mais bem sucedidos jogos de videogame da história, 
    mas Alice e Beatriz são muito pequenas para jogar, 
    e estão interessadas apenas nas cartas propriamente ditas. 
    Para facilitar, vamos considerar que cada carta possui um identificador único, que é um número inteiro.

    Cada uma das duas meninas possui um conjunto de cartas e, 
    como a maioria das garotas de sua idade, 
    gostam de trocar entre si as cartas que têm. 
    
    Elas obviamente não têm interesse em trocar cartas idênticas, que ambas possuem, 
    e não querem receber cartas repetidas na troca.
    Além disso, as cartas serão trocadas em uma única operação de troca: 
    Alice dá para Beatriz um sub-conjunto com N cartas distintas e 
    recebe de volta um outro sub-conjunto com N cartas distintas.

    As meninas querem saber qual é o número máximo de cartas que podem ser trocadas. 
    Por exemplo, se Alice tem o conjunto de cartas {1, 1, 2, 3, 5, 7, 8, 8, 9, 15} 
    e Beatriz o conjunto {2, 2, 2, 3, 4, 6, 10, 11, 11}, 
    elas podem trocar entre si no máximo quatro cartas. 
    
    Escreva um programa que, dados os conjuntos de cartas que Alice e Beatriz possuem, 
    determine o número máximo de cartas que podem ser trocadas.

    Entrada
    
    A entrada contém vários casos de teste. 
    A primeira linha de um caso de teste contém dois números inteiros A e B, 
    separados por um espaço em branco, 
    indicando respectivamente o número de cartas que Alice e Beatriz possuem (1 ≤ A ≤ 10^4 e 1 ≤ B ≤ 10^4). 
    
    A segunda linha contém A números inteiros Xi, 
    separados entre si por um espaço em branco, 
    cada número indicando uma carta do conjunto de Alice (1 ≤ Xi ≤ 10^5). 
    
    A terceira linha contém B números inteiros Yi, 
    separados entre si por um espaço em branco, 
    cada número indicando uma carta do conjunto de Beatriz (1 ≤ Yi ≤ 10^5). 
    As cartas de Alice e Beatriz são apresentadas em ordem não decrescente.

    O final da entrada é indicado por uma linha que contém apenas dois zeros, 
    separados por um espaço em branco.

    Saída
    Para cada caso de teste da entrada seu programa deve imprimir uma única linha, 
    contendo um numero inteiro, 
    indicando o número máximo de cartas que Alice e Beatriz podem trocar entre si.

    OBS: defina uma função que receba o conjunto de cartas de ambas as garotas e
    retorne o número máximo de cartas que elas podem trocar.

*/

#include <stdio.h>

funcaoContaTrocas(int a, int b, int vetorA[],int vetorB[]);

int main(){
    while (1)
    {
        int a, b, num;
        scanf("%d %d", &a, &b);

        if(a == 0 && b == 0){
            break;
        }

        int vetorA[a]; 
        int vetorB[b];
        
        for (int i = 0; i < a; i++){
            scanf("%d", &vetorA[i]);
        }
        for (int i = 0; i < b; i++){
            scanf("%d", &vetorB[i]);
        }

        num = funcaoContaTrocas(a, b, vetorA, vetorB);
        printf("%d\n\n", num);       

    }
    
    return 0;
}

funcaoContaTrocas(int a, int b, int vetorA[],int vetorB[]){
    
    int x = 0;

    return x;
}

    /*int resultado;
    int numerosIguaisEmA = 0;
    int numerosIguaisEmB = 0;

    for (int i = 0; i < a; i++){ //contando quantos numeros repetidos tem em vetorA
        for (int j = 1; i < b; j++){
            if(vetorA[a] == vetorA[b]){
                numerosIguaisEmA +=1;
            }
        }
    }

    for (int i = 0; i < a; i++){ //contando quantos numeros repetidos tem em vetorB
        for (int j = 1; i < b; j++){
            if(vetorA[a] == vetorA[b]){
                numerosIguaisEmB +=1;
            }
        }
    }*/
    


    /*
    
    {1, 1, 2, 3, 5, 7, 8, 8, 9, 15} a = 10
    {2, 2, 2, 3, 4, 6, 10, 11, 11}  b = 9

    primeiro apaga os numeros repetidos dentro dos vetores / subtrai tamanho pela quantidade de numeros repetidos

    {1, 2, 3, 5, 7, 8, 9, 15} a = 8
    {2, 3, 4, 6, 10, 11}  b = 6

    depois compara entre os vetores se a numeros iguais entre eles, caso haja apaga nos 2

    {1, 5, 7, 8, 9, 15} a = 8
    {4, 6, 10, 11}  b = 6

    apos isso o numero de digitos do menor vetor será o numero de trocas 

    resultado = a < b ? a : b;
    
    */

