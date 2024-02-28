/*
    A Fronteira Final
    
    Contexto:

    É o ano de 2265, e a Universidade da Fronteira Final Sideral (UFFS) já conta com diversos campi espalhados pela galáxia, 
    de modo que todos os cursos de graduação da UFFS são ofertados em todos os campi. 
    Cada curso promove várias atividades por ano, e as atividades promovidas por um curso são as mesmas em todos os campi da UFFS. 
    Para que cada atividade possa acontecer, a Universidade precisa comprar uma certa quantidade de materiais, 
    mas os preços de cada material não são os mesmos para todos os campi. 
    
    Um lápis, por exemplo, pode custar Ƀ2 (2 bitcoins) para o campus de Chapecó, no planeta Terra, 
    e Ƀ7 (7 bitcoins) para o campus de ShiKahr, no planeta Vulcano. 
    
    Apesar das diferenças de custo, nunca compensa comprar materiais num campus para enviá-los para outro campus, 
    dados os elevadíssimos custos de transporte e taxas de importação e de exportação. 
    
    Assim, a fim de que todas as atividades da Universidade possam ser realizadas, 
    a Reitoria precisa transferir para cada curso de cada campus a quantia certa de bitcoins 
    a fim de que os cursos possam eles próprios comprar os materiais.

    Entrada:

    A primeira linha da entrada consiste de quatro inteiros positivos, G, A, M e C (G ≤ 600; A, C ≤ 100; M ≤ 2000), 
    os quais representam:

    G = o número de cursos de graduação, 
    A = o número total de tipos de atividade que podem ocorrer, 
    M = o número total de tipos de material que podem ser necessários 
    C = o número de campi da UFFS.

    Os cursos são designados na entrada pelos inteiros de 1 a G, 
    os tipos de atividade pelos inteiros de 1 a A, 
    os tipos de material pelos inteiros de 1 a M, 
    os campi pelos inteiros de 1 a C.

    Seguem, então, três tabelas de inteiros não-negativos.
    Cada tabela é precedida por uma linha em branco, 
    entre duas colunas consecutivas de uma mesma tabela há uma coluna de espaços de largura 1, 
    e espaços adicionais podem preceder cada inteiro duma tabela 
    a fim de que todas as colunas daquela tabela fiquem alinhadas à direita 
    e haja ao menos um inteiro por coluna que não seja precedido por espaços adicionais.

    A primeira tabela consiste de G linhas, cada uma contendo A inteiros não maiores que 10, 
    de modo que o j-ésimo inteiro da i-ésima linha representa quantas atividades do tipo j um curso i precisa realizar no ano corrente.

        matriz[G][A]

    A segunda tabela consiste de A linhas, cada uma contendo M inteiros não maiores que 10, 
    de modo que o j-ésimo inteiro da i-ésima linha representa de quantos materiais do tipo j 
    a realização de uma atividade do tipo i precisa.

        matriz[A][M]

    A terceira e última tabela consiste de M linhas, cada uma contendo C inteiros não maiores que 100, 
    de modo que o j-ésimo inteiro da i-ésima linha representa o preço, em bitcoins, 
    de uma unidade do material do tipo i no planeta em que se situa o campus j.
        
        matriz[M][C]

    Saída:
    
    Imprima G linhas contendo C inteiros cada, 
    de modo que o j-ésimo inteiro da i-ésima linha represente a quantia de bitcoins 
    que a Reitoria precisa transferir para o curso i do campus j. 
    
        GA x AM x MC = Custo por curso

    Siga rigorosamente as mesmas regras de espaçamento entre colunas da entrada.

*/

#include <stdio.h>

int main(){

    int g, a, m, c;
    scanf("%d %d %d %d", &g, &a, &m, &c);

    if(g <= 0 || a <= 0 || m <= 0 || c <= 0){ // verifica que G, A, C ou M não seja 0 ou 1 
        return 0;
    }else if(g > 600 || c > 100 || m > 2000){ //(G ≤ 600; A, C ≤ 100; M ≤ 2000), 
        return 0;
    }

    printf("\n");

    // criar matriz[G][A] 
    int matrizGA[g][a];

    for (int i = 0; i < g; i++) {
        for (int j = 0; j < a; j++) {
            scanf("%d", &matrizGA[i][j]);
        }
    }

    // criar matriz[A][M]
    int matrizAM[a][m];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrizAM[i][j]);
        }
    }
    
    // criar matriz[M][C]
    int matrizMC[m][c];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrizMC[i][j]);
        }
    }
    
    // multiplicar matriz[G][A] por matriz[A][M] 
    int resultadoGAM[g][m];

    for (int i=0; i<g; i++){
        for (int j=0; j<m; j++){
            resultadoGAM[i][j] = 0;
            for (int k=0; k<a; k++)
                resultadoGAM[i][j] += matrizGA[i][k] * matrizAM[k][j];
        }
    }

    // e o resultado multiplica com matriz[M][C]
    int resultadoGAMC[g][c];
    
    for (int i=0; i<g; i++){
        for (int j=0; j<c; j++){
            resultadoGAMC[i][j] = 0;
            for (int k=0; k<m; k++)
                resultadoGAMC[i][j] += resultadoGAM[i][k] * matrizMC[k][j];
        }
    }

    // preciso saber o valor de *
    int maior = 0;

    for (int i = 0; i < g; i++) {
        for (int j = 0; j < c; j++) {
            if (resultadoGAMC[i][j] > maior) {
                maior = resultadoGAMC[i][j];
            }
        }
    }

    int mE = 0;
    while (maior != 0){
        maior /= 10;
        mE++;
    }

    //print resultadoGAMC
    for (int i=0; i<g; i++){
        for (int j=0; j<c; j++) {
            printf("%*d ", mE, resultadoGAMC[i][j]);
        }
        printf("\n");
    }
}