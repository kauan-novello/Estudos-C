#include <stdio.h>

_Bool stringsIguais(const char str1[], const char str2[]);

int main() {
    char palavra1[100]; 
    char palavra2[100];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    if (stringsIguais(palavra1, palavra2)) {
        printf("as palavras sao iguais\n");
    } else {
        printf("as palavras nao sao iguais\n");
    }

    return 0;
}

_Bool stringsIguais(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
        ++i;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1;
    } else {
        return 0;
    }
}
