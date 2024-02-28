#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa {
    char nome[50];
    int idade;
    struct Pessoa *prox;
} Pessoa;

Pessoa *inserir(Pessoa *lista, char *nome, int idade) {
    Pessoa *nova = (Pessoa *) malloc(sizeof(Pessoa));
    strcpy(nova->nome, nome);
    nova->idade = idade;
    nova->prox = lista;
    return nova;
}

void printar(Pessoa *lista) {
    Pessoa *p;
    for(p = lista; p != NULL; p = p->prox) {
        printf("Nome: %s, Idade: %d\n", p->nome, p->idade);
    }
}

void liberar_memoria(Pessoa *lista) {
    Pessoa *p = lista, *t;
    while(p != NULL) {
        t = p->prox;
        free(p);
        p = t;
    }
}

int main() {
    Pessoa *lista = NULL;

    lista = inserir(lista, "João", 20);
    lista = inserir(lista, "Maria", 30);
    lista = inserir(lista, "Pedro", 40);

    printar(lista);

    liberar_memoria(lista);

    return 0;
}