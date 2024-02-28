#include <stdio.h>
void printArrayNormal(int arr[], int size);
void printArrayReverse(int arr[], int size);


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array na ordem normal: ");
    printArrayNormal(arr, size);
    printf("\n");

    printf("Array na ordem reversa: ");
    printArrayReverse(arr, size);
    printf("\n");

    return 0;
}

// Função para imprimir os elementos do array de forma normal
void printArrayNormal(int arr[], int size) {
    if (size == 0) {
        return;
    }
    printArrayNormal(arr, size - 1);
    printf("%d ", arr[size - 1]);
}

// Função para imprimir os elementos do array de forma reversa
void printArrayReverse(int arr[], int size) {
    if (size == 0) {
        return;
    }
    printf("%d ", arr[size - 1]);
    printArrayReverse(arr, size - 1);
}
