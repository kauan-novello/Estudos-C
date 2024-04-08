#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {
    char nome[50];
    float preco;
};

void calcularGastos() {
    int m, p;
    scanf("%d", &m);

    struct Produto *produtos = (struct Produto *)malloc(m * sizeof(struct Produto));
    
    for(int i = 0; i < m; i++){
        scanf("%s %f", produtos[i].nome, &produtos[i].preco);
    }    

    scanf("%d", &p);

    float total = 0.0;
    for(int i = 0; i < p; i++){
        char nomeProduto[50];
        int quantidade;
        scanf("%s %d", nomeProduto, &quantidade);

        for(int j = 0; j < m; j++){
            if(strcmp(produtos[j].nome, nomeProduto) == 0){
                total += produtos[j].preco * quantidade;
                break;
            }
        }
    }

    printf("R$ %.2f\n", total);

    free(produtos);
}

int main(){
    int n;
    scanf("%d", &n);

    while (n--) {
        calcularGastos();
    }

    return 0;
}
