/*
    %d ou %i: São usados para formatar números inteiros decimais. 

    %o: Inteiros octais (base 8). 

    %x: Inteiros em hexadecimal (base 16).

    %u: Números inteiros sem sinal (unsigned).

    %f: Floats: ponto flutuante (números reais).

    %e: Transforma floats em notação científica

    %c: caracteres

    %s: strings (cadeias de caracteres).

    %p: ponteiros.

    %ld: long int                           <------- a mesma regra vale para usigned (%lu), octais (%lo) e hexas (%lx)
    %lld: long long int                     <------- a mesma regra vale para usigned (%llu), octais (%llo) e hexas (%llx)
    

    %n: É usado em printf para determinar o número de caracteres escritos até esse ponto na string de saída.

    %%: É usado para exibir o caractere de porcentagem (%) literal em uma saída formatada. Por exemplo, printf("%%") exibirá um único caractere '%' na saída.

    %.*f: É usado para formatar um número de ponto flutuante com um número específico de casas decimais. Por exemplo, printf("%.2f", 3.14159) exibirá "3.14".

    %*d: É usado para especificar o tamanho mínimo de campo ao imprimir inteiros. Por exemplo, printf("%5d", 42) exibirá " 42".
*/