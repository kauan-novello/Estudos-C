#include <stdio.h>

void deletarNumero(int vetor[], int *tamanho, int numero);

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 1, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int numero_para_deletar = 1;

    printf("Vetor original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    deletarNumero(vetor, &tamanho, numero_para_deletar);

    printf("Vetor após a remoção do número %d: ", numero_para_deletar);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

void deletarNumero(int vetor[], int *tamanho, int numero) {
    int i, j = 0;

    for (i = 0; i < *tamanho; i++) {
        if (vetor[i] != numero) {
            vetor[j] = vetor[i];
            j++;
        }
    }

    *tamanho = j; // Atualiza o tamanho do vetor após a remoção dos números
}