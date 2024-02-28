#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *proximo;
} No;

typedef struct fila {
    No *inicio;
    No *fim;
} Fila;

//declaração de funções:
void inicializarFila(Fila *fila);
int vazia(Fila *fila);
void enfileirar(Fila *fila, int valor);
int desenfileirar(Fila *fila);
int estaOrdenada(Fila *fila);

int main() {
    int n, i, operacao, valor, ordenada;
    Fila fila;
    while (scanf("%d", &n) != EOF) {
        inicializarFila(&fila);
        ordenada = 1;
        for (i = 0; i < n; i++) {
            scanf("%d %d", &operacao, &valor);
            if (operacao == 1) {
                enfileirar(&fila, valor);
                if (ordenada && !estaOrdenada(&fila)) {
                    ordenada = 0;
                }
            } else {
                if (desenfileirar(&fila) != valor) {
                    ordenada = 0;
                }
            }
        }
        if (ordenada) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    return 0;
}

//descrição de funções:
void inicializarFila(Fila *fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
}
int vazia(Fila *fila) {
    return (fila->inicio == NULL);
}
void enfileirar(Fila *fila, int valor) {
    No *novo = (No *) malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = NULL;
    if (vazia(fila)) {
        fila->inicio = novo;
    } else {
        fila->fim->proximo = novo;
    }
    fila->fim = novo;
}
int desenfileirar(Fila *fila) {
    int valor;
    No *removido;
    if (vazia(fila)) {
        return -1;
    }
    removido = fila->inicio;
    fila->inicio = fila->inicio->proximo;
    valor = removido->valor;
    free(removido);
    if (fila->inicio == NULL) {
        fila->fim = NULL;
    }
    return valor;
}
int estaOrdenada(Fila *fila) {
    int tamanho, i, anterior, atual, ordenadaCrescente = 1, ordenadaDecrescente = 1;
    Fila filaAux;
    inicializarFila(&filaAux);
    tamanho = 0;
    anterior = -1;
    while (!vazia(fila)) {
        atual = desenfileirar(fila);
        tamanho++;
        enfileirar(&filaAux, atual);
        if (anterior != -1) {
            if (atual > anterior) {
                ordenadaDecrescente = 0;
            }
            if (atual < anterior) {
                ordenadaCrescente = 0;
            }
        }
        anterior = atual;
    }
    for (i = 0; i < tamanho; i++) {
        atual = desenfileirar(&filaAux);
        enfileirar(fila, atual);
    }
    if (ordenadaCrescente || ordenadaDecrescente) {
        return 1;
    } else {
        return 0;
    }
}
