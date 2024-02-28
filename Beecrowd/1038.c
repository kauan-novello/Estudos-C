#include <stdio.h>
 
int main() {
 
    int id, qtd;
    float p;

    scanf("%d %d", &id, &qtd);

    switch (id)
    {
    case 1:
        p = 4;
        break;
    case 2:
        p = 4.5;
        break;
    case 3:
        p = 5;
        break;
    case 4:
        p = 2;
        break;
    case 5:
        p = 1.5;
        break;
    default:
        break;
    }

    float result = p * qtd;
    printf("Total: R$ %.2f", result);

    return 0;
}
