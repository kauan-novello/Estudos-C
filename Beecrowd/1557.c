/*

    Matriz Quadrada III

    Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 15),
    correspondente a ordem de uma matriz M de inteiros,
    e construa a matriz de acordo com o exemplo abaixo.

    Entrada
    A entrada consiste de vários inteiros, um valor por linha,
    correspondentes as ordens das matrizes a serem construídas.
    O final da entrada é marcado por um valor de ordem igual a zero (0).

    Saída
    Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo.
    Os valores das matrizes devem ser formatados em um campo de tamanho T
    justificados à direita e separados por espaço,
    onde T é igual ao número de dígitos do maior número da matriz.
    Após o último caractere de cada linha da matriz não deve haver espaços em branco.
    Após a impressão de cada matriz deve ser deixada uma linha em branco.

*/

// ("%*d", x, vetor[i][j]);

#include <stdio.h>
#include <math.h>

int main()
{

    while (1)
    {
        int entrada;
        scanf("%d", &entrada);
        if (entrada == 0)
        {
            break;
        }
        if (entrada < 0 || entrada > 15)
        { // se n estiver entre 1 e 15
            return 0;
        }

        int matriz[entrada][entrada];
        int multiplicador = 1;

        for (int i = 0; i < entrada; i++)
        {
            for (int j = 0; j < entrada; j++)
            {
                matriz[i][j] = multiplicador;
                multiplicador *= 2;
            }
            if (entrada != 1)
            {
                multiplicador /= pow(2, entrada - 1); 
            }
            else
            {
                multiplicador /= pow(2, entrada);
            }
        }

        //  antes de printar preciso saber quantos digitos tem o ultimo elemento da matriz ora definir x

        int ultimoElemento = matriz[entrada - 1][entrada - 1]; // menos 1 pq começa de 0
        int x = 0;
        while (ultimoElemento != 0)
        {
            ultimoElemento /= 10;
            x++;
            // printf("%d", ultimoElemento);
        }

        // print alinhado
        for (int i = 0; i < entrada; i++)
        {
            for (int j = 0; j < entrada; j++)
            {   
                if(j==0){
                    printf("%*d", x, matriz[i][j]);
                }else{
                    printf(" %*d", x, matriz[i][j]);
                }
                // if (j < entrada - 1)
                // {
                //     printf(" ");
                // }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}