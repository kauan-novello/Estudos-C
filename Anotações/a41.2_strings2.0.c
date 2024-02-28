// BIBLIOTECA <STRING.h> http://www.cplusplus.com/reference/cstring/

// strcpy(*s1,*s2) - Copia a string s2 para a string s1. O valor de s1 é retornado;
// strcmp(*s1,*s2) - Compara a string s1 com a string s2. A função retorna 0, menor que 0 ou maior do que 0 se s1 for igual a, menor do que ou maior do que s2;
// size_t strlen(*s1) - Retorna o tamanho da string (conta a quantidade de caracteres até o caractere de terminação "\0", sem incluí-lo na contagem);

// fgets(str,51,stdin); - stx: fgets(string, tamanho máximo(+\0), e o arquivo de leitura.

// getchar() Obtém o próximo caractere do dispositivo padrão de entrada e retorna como inteiro

#include <stdio.h>

int main() {
    printf("Digite uma linha de texto:\n");

    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        // Processar o caractere, por exemplo, imprimir em maiúsculas
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A'; // converter para maiúscula
        }
        putchar(ch);
    }

    printf("\n");

    return 0;
}