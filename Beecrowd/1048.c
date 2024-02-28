/*
    A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:

    Salário	Percentual de Reajuste:

    0 - 400.00                      15%
    400.01 - 800.00                 12%
    800.01 - 1200.00                10%
    1200.01 - 2000.00               7%
    Acima de 2000.00                4%

    Leia o salário do funcionário e calcule e mostre o novo salário,
    bem como o valor de reajuste ganho e o índice reajustado, em percentual.

    Entrada
    A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

    Saída
    Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste
    (ambos devem ser apresentados com 2 casas decimais) e o percentual de reajuste ganho, conforme exemplo abaixo.
*/

#include <stdio.h>

int main()
{

    float salario, reajuste, novoSalario, percentual;

    scanf("%f", &salario);

    if (salario < 0)
    {
        return 1;
    }
    else if (salario >= 0 && salario <= 400)
    {

        percentual = 15;
        reajuste = salario * percentual/100;
        novoSalario = salario + reajuste;
        
        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %\n", percentual);
    }
    else if (salario >= 400.01 && salario <= 800)
    {

        percentual = 12;
        reajuste = salario * percentual/100;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %\n", percentual);
    }
    else if (salario >= 800.01 && salario <= 1200)
    {

        percentual = 10;
        reajuste = salario * percentual/100;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %\n", percentual);
    }
    else if (salario >= 1200.01 && salario <= 2000)
    {

        percentual = 7;
        reajuste = salario * percentual/100;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %\n", percentual);
    }
    else
    { // acima de 2000
        percentual = 4;
        reajuste = salario * percentual/100;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: %.0f %\n", percentual);
    }

    return 0;
}