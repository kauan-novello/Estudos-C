#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int x;
    int y;
    struct Node *next;
} Node;

Node *initializarLista() {
    Node *new_node = (Node *) malloc(sizeof(Node));
    new_node->x = 0;
    new_node->y = 0;
    new_node->next = NULL;
    return new_node;
}

void adicionarPeca(Node **lista, int x, int y) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    new_node->x = x;
    new_node->y = y;
    new_node->next = *lista;
    *lista = new_node;
}

void mostrarLista(Node *lista) {
    Node *current = lista;
    while (current != NULL) {
        printf("[%d|%d] ", current->x, current->y);
        current = current->next;
    }
    printf("\n");
}

void liberarLista(Node *lista) {
    Node *current = lista;
    while (current != NULL) {
        Node *next = current->next;
        free(current);
        current = next;
    }
}

int validarJogada(Node *mesa, int x, int y) {
    Node *current = mesa;
    while (current != NULL) {
        if (current->x == x && current->y == y) {
            return 0;
        }
        current = current->next;
    }
    return 1;
}

int main() {
    Node *mesa = initializarLista();
    Node *peca_player = initializarLista();
    int jogadas = 0;

    printf("Insira as coordenadas x e y separadas por espaço: ");
    int x, y;
    while (scanf("%d %d", &x, &y) == 2) {
        if (validarJogada(mesa, x, y)) {
            adicionarPeca(&peca_player, x, y);
            jogadas++;
            printf("Jogada adicionada! Coordenadas: [%d|%d]\n", x, y);
        } else {
            printf("Jogada inválida! Coordenadas já ocupadas.\n");
        }
        printf("Insira as coordenadas x e y separadas por espaço: ");
    }

    mostrarLista(peca_player);
    liberarLista(mesa);
    liberarLista(peca_player);

    return 0;
}