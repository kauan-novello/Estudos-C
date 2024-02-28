#include <stdio.h>

int main()
{

    char comand;

    printf("Calculadora em C: \n + : soma \n - : subtracao \n * : multiplicao \n / : divisao \n %% : resto da divisao \n");
    scanf("%c", &comand);

    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    switch (comand)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;

    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;

    case '/':
        if (num2 == 0)
        {
            printf("Erro: divisao por zero\n");
        }
        else
        {
            printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
        }
        break;

    case '%%':
        printf("%d %% %d = %d\n", num1, num2, num1 % num2);
        break;

    default:
        printf("Operador invalido\n");
    }
    return 0;
}
