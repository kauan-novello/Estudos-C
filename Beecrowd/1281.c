/*
    Dona Parcinova costuma ir regularmente à feira para comprar frutas e legumes. 
    Ela pediu então à sua filha, Mangojata, 
    que a ajudasse com as contas e que fizesse um programa que calculasse o valor 
    que precisa levar para poder comprar tudo que está em sua lista de compras, 
    considerando a quantidade de cada tipo de fruta ou legume e os preços destes itens.

    Entrada
    A primeira linha de entrada contém um inteiro N 
    que indica a quantidade de idas à feira de dona Parcinova 
    (que nada mais é do que o número de casos de teste que vem a seguir). 
    
    Cada caso de teste inicia com um inteiro M que indica 
    a quantidade de produtos que estão disponíveis para venda na feira. 
    Seguem os M produtos com seus preços respectivos por unidade ou Kg.

    ex: 
        4               inteiro M;
        mamao 2.19      
        cebola 3.10     nome[50] floatPreco;
        tomate 2.80
        uva 2.73

    A próxima linha de entrada contém um inteiro P (1 ≤ P ≤ M) 
    que indica a quantidade de diferentes produtos que dona Parcinova deseja comprar. 
    Seguem P linhas contendo cada uma delas um texto (com até 50 caracteres) 
    e um valor inteiro, que indicam respectivamente o nome de cada produto e a quantidade deste produto.

    ex:      

        3               inteiro P (1 ≤ P ≤ M)
        mamao 2         
        tomate 1        nome[50] intQuantidade;
        uva 3

    Saída
    Para cada caso de teste, 
    imprima o valor que será gasto por dona Parcinova no seguinte formato: 
    R$ seguido de um espaço e seguido do valor, com 2 casas decimais, conforme o exemplo abaixo.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {
    char nome[50];
    int quantidade;
    float preco;
};

int casos(){

    int m; // inteiro M indica a quantidade de produtos que estão disponíveis para venda na feira.
    scanf("%d", &m);

    //struct Produto produto[m];
    struct Produto *produto = (struct Produto *)malloc(m * sizeof(struct Produto));
    
    for(int i=0; i<m; i++){
        scanf("%s %f", produto[i].nome, &produto[i].preco);
        produto[i].quantidade = 0;
    }    

    int p; // um inteiro P indica a quantidade de diferentes produtos que dona Parcinova deseja comprar.
    scanf("%d", &p);

    //struct Produto produtoDesejado[p];
    struct Produto *produtoDesejado = (struct Produto *)malloc(p * sizeof(struct Produto));

    for(int i=0; i<p; i++){
        scanf("%s %d", produtoDesejado[i].nome, &produtoDesejado[i].quantidade);
    } 

    // comparar todos os nomes de produto com os de produtoDesejado
    for (int i = 0; i < p; i++){                                          // i = p = produtosDesejado
        for (int j = 0; j < m; j++){                                      // j = m = produto
            if(strcmp(produto[j].nome, produtoDesejado[i].nome) == 0){
                produto[i].quantidade = produtoDesejado[j].quantidade;
            }
            else{
                 produto[i].quantidade = 0;
            }
        }        
    }

    // for (int i = 0; i < p; i++){
    //     //produtoDesejado[i].quantidade = 0; // Inicializa a quantidade desejada como zero
    //     for (int j = 0; j < m; j++){
    //         if(strcmp(produto[j].nome, produtoDesejado[i].nome) == 0){
    //             produtoDesejado[i].quantidade = produto[j].quantidade;
    //         }
    //     }
    // }
    
    for (int i=0; i<m; i++){ 
        printf("%s %.2f %d\n", produto[i].nome, produto[i].preco, produto[i].quantidade);
    }

    return 0;
}

int main(){ // só pergunta o numero de caso e roda n vezes a função caso
    int n;
    scanf("%d", &n);
    while (n--){
        casos();
    }
    return 0;
}