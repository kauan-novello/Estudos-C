#include <stdio.h>
#include <math.h>

struct Circunferencia {
    int r;
    int x;
    int y;
} c1, c2;

int main() {
    //struct Circunferencia c1;
    //struct Circunferencia c2;

    while (scanf("%d %d %d %d %d %d", &c1.r, &c1.x, &c1.y, &c2.r, &c2.x, &c2.y) == 6) {
        
        double d = sqrt(pow(c2.x - c1.x, 2) + pow(c2.y - c1.y, 2));
        //sqtr == calcula a raiz quadrada de um número
        //pow == elava a potencia | pow(c2.x - c1.x, 2) == (c2.x - c1.x)^2 || (c2.x - c1.x)*(c2.x - c1.x)

        // Verifica se a segunda circunferência está contida dentro da primeira
        if (d + c2.r <= c1.r) {
            printf("RICO\n");
        } else {
            printf("MORTO\n");
        }
    }

    return 0;
}
