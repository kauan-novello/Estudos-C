#include <stdio.h>

int main() {
    float A, B, C;

    printf("Digite o valor de A: ");
    scanf("%f %f %f", &A, &B, &C);


    // Ordenando os valores em ordem decrescente
    if (A < B) {
        float temp = A;
        A = B;
        B = temp;
    }
    if (A < C) {
        float temp = A;
        A = C;
        C = temp;
    }
    if (B < C) {
        float temp = B;
        B = C;
        C = temp;
    }

    printf("Valores em ordem decrescente: %.2f, %.2f, %.2f\n", A, B, C);

    return 0;
}
