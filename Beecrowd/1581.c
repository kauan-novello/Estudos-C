/*
    Rafael recentemente recebeu uma bolsa de estudos e está fazendo intercâmbio fora do Brasil, 
    onde conheceu várias pessoas de várias nacionalidades diferentes. 
    O idioma nativo desse país é o Inglês, e todas as pessoas que Rafael conheceu falam inglês como primeira ou segunda língua.

    Como aprender um segundo idioma é uma tarefa difícil e cansativa, 
    as pessoas preferem falar seu idioma nativo sempre que possível. 
    
    Uma exceção à essa regra é quando há duas pessoas no grupo que não tem o mesmo idioma nativo. 
    Nesse tipo de situação, o idioma utilizado é o inglês.

    Por exemplo, se em um grupo há só brasileiros, o idioma falado será o português, 
    mas caso haja um espanhol entre os brasileiros, o idioma falado será o inglês.

    Rafael as vezes fica confuso sobre qual idioma deveria ser falado em cada grupo de pessoas, 
    e para isso pediu sua ajuda.

    Entrada
    A primeira linha contém um inteiro N, indicando o número de casos de testes a seguir.

    Cada caso de teste inicia com um inteiro K (2 ≤ K ≤ 100), representando o número de pessoas no grupo. 
    Em seguida haverá K linhas, contendo uma string S cada, representando o idioma nativo de cada uma dessas K pessoas.

    Cada string conterá no mínimo 1 e no máximo 20 caracteres, entre eles apenas letras minúsculas (a-z).

    Saída
    Imprima uma linha, contendo uma string S, representando o idioma mais apropriado para a conversa.

*/

#include <stdio.h>
#include <string.h>

void saidaString(){
    int k;

    scanf("%d", &k);

    char str1[20];
    char strAtual[20];
    char * ingles = "ingles";

    scanf("%s", str1);

    for (int i = 1; i < k; i++){

        scanf("%s", strAtual);
        
        if (strcmp(str1, strAtual) != 0){
            strcpy(str1, ingles);
        }else{
            strcpy(str1, strAtual);
        }
    }

    printf("%s\n", str1);
}

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        saidaString();
    }
    return 0;
}