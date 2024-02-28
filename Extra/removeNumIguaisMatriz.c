#include <stdio.h>

int main() {
    int matrizOriginal[] = {1, 2, 2, 3, 4, 4, 5};
    int tamanhoOriginal = sizeof(matrizOriginal) / sizeof(matrizOriginal[0]);

    // Inicialize uma nova matriz para armazenar números únicos
    int matrizUnica[tamanhoOriginal];
    int tamanhoUnico = 0;

    // Percorra a matriz original
    for (int i = 0; i < tamanhoOriginal; i++) {
        int elementoAtual = matrizOriginal[i];
        int encontrado = 0;

        // Verifique se o elemento já está na matriz única
        for (int j = 0; j < tamanhoUnico; j++) {
            if (matrizUnica[j] == elementoAtual) {
                encontrado = 1;
                break;
            }
        }

        // Se o elemento não foi encontrado na matriz única, adicione-o
        if (!encontrado) {
            matrizUnica[tamanhoUnico] = elementoAtual;
            tamanhoUnico++;
        }
    }

    // Agora matrizUnica contém os números únicos
    printf("Matriz original: ");
    for (int i = 0; i < tamanhoOriginal; i++) {
        printf("%d ", matrizOriginal[i]);
    }
    printf("\n");

    printf("Matriz única: ");
    for (int i = 0; i < tamanhoUnico; i++) {
        printf("%d ", matrizUnica[i]);
    }
    printf("\n");

    return 0;
}

