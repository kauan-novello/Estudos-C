#include <stdio.h> //printf(), scanf(), fopen(), fclose(), fprintf(), fscanf(), getchar(), putchar();
//#include <stdlib.h> //malloc(), calloc(), realloc(), free(), exit();

int main(){
    int N;
    int i, s;

    printf("Digite o valor de N: ");
    scanf("%d", &N);
    s = 0, i = 1;

    while ( i <= N ){
        s += i;
        i++;
    }
    printf("Soma = %d\n", s);
    //system("PAUSE");
    return 0;  

}