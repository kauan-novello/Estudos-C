#include <stdio.h>
#include <string.h>

void saidaLetras(char linha[])
{
    char linhaNova[200];
    int j = 0;

    for (int i = 0; i < strlen(linha); i++)
    {
        if (linha[i] >= 'A' && linha[i] <= 'Z')
        { // transformei tudo em minúsculo
            linhaNova[j] = linha[i] + 32;
            j++;
        }
        if (linha[i] >= 'a' && linha[i] <= 'z')
        { // retirei as "não letras"
            linhaNova[j] = linha[i];
            j++;
        }
    }

    linhaNova[j] = '\0';

    int countFrequencia[26] = {0};

    for (int i = 0; i < strlen(linhaNova); i++)
    { // fiz um contador de 0 a 25 que conta para cada letra do alfabeto
        char letra = linhaNova[i];
        if (letra >= 'a' && letra <= 'z')
        {
            countFrequencia[letra - 'a'] += 1;
        }
    }

    int maiorNum = 0;

    for (int i = 0; i < 26; i++)
    {
        if (countFrequencia[i] > maiorNum)
        {
            maiorNum = countFrequencia[i];
        }
    }

    // Agora, vamos imprimir as letras de maior frequência em ordem alfabética.
    for (int i = 0; i < 26; i++)
    {
        if (countFrequencia[i] == maiorNum)
        {
            printf("%c", i + 'a');
        }
    }

    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    char linha[200];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", linha);
        saidaLetras(linha);
    }

    return 0;
}
