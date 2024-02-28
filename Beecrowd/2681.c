#include <stdio.h>

void torre_de_hanoi(int num_discos, int pino_origem, int pino_destino, int pino_auxiliar, long long *movimentos) {
    
    if (num_discos == 1) {
        (*movimentos)++;
        return;
    }

    torre_de_hanoi(num_discos - 1, pino_origem, pino_auxiliar, pino_destino, movimentos);

    (*movimentos)++;

    torre_de_hanoi(num_discos - 1, pino_auxiliar, pino_destino, pino_origem, movimentos);
}

void calcular_horario_conclusao(int num_discos) {
    long long movimentos = 0;
    torre_de_hanoi(num_discos, 1, 3, 2, &movimentos);

    int segundos_por_dia = 86400;
    int tempo_restante = movimentos % segundos_por_dia;

    int horas = tempo_restante / 3600;
    int minutos = (tempo_restante % 3600) / 60;
    int segundos = tempo_restante % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
}

int main() {
    int num_discos;
    scanf("%d", &num_discos);

    calcular_horario_conclusao(num_discos);

    return 0;
}
