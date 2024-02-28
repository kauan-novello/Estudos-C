#include <stdio.h>
#include <stdbool.h>

struct dicionario
{
    char palavra[20];
    char descricao[50];
};

bool toCompareString(const char palavra1[], const char palavra2[]) {
    int i = 0;

    while (palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0') {
        i++;
    }
    if (palavra1[i] == '\0' && palavra2[i] == '\0') {
        return true;
    } else {
        return false;
    }
}

int toSearchString(const struct dicionario lingua[], const char procurar[], const int numDePalavras) {
    int i = 0;
    while (i < numDePalavras) {
        if (toCompareString(procurar, lingua[i].palavra)) {
            return i;
        } else {
            i++;
        }
    }
    return -1;
}

const struct dicionario portugues[7] = {
    {"falar", "expressar-se oralmente; proferir palavras"},
    {"ver", "perceber visualmente; observar"},
    {"conversar", "ter uma conversa; trocar palavras com alguém"},
    {"quer", "expressa desejo ou vontade"},
    {"ser", "existir; ter identidade; caracterizar-se como"},
    {"pensar", "ter processos mentais; refletir; raciocinar"},
    {"fazer", "realizar uma ação; criar; produzir"},
};

const struct dicionario english[7] = {
    {"read", "interpret and understand written or printed material"},
    {"write", "put words on paper or in a digital form"},
    {"listen", "give attention with the ear; perceive sounds"},
    {"run", "move rapidly on foot; sprint"},
    {"eat", "consume food through the mouth"},
    {"sleep", "be in a natural, periodic state of rest"},
    {"learn", "acquire knowledge or skill through study or experience"},
};

int main(void) {
    char palavra[20] = {'\0'};
    char idioma[20] = {'\0'};
    int resultadoPesquisa;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("\nDigite o idioma (portugues ou english): ");
    scanf("%s", idioma);

    if (toCompareString(idioma, "portugues")) {
        resultadoPesquisa = toSearchString(portugues, palavra, 7);
    } else if (toCompareString(idioma, "english")) {
        resultadoPesquisa = toSearchString(english, palavra, 7);
    } else {
        printf("Idioma nao reconhecido\n");
        return 1; 
    }

    if (resultadoPesquisa != -1) {
        printf("%s\n", toCompareString(idioma, "portugues") ? portugues[resultadoPesquisa].descricao : english[resultadoPesquisa].descricao);
    } else {
        printf("Palavra nao encontrada\n");
    }

    return 0;
}
