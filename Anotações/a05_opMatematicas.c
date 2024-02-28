#include <stdio.h>

int main(){

    int MinhaIdade = 19, MaeIdade = 42, PaiIdade = 47; 
    int SomaIdade = MinhaIdade + MaeIdade + PaiIdade;               // Operador de soma '+'
    int MultiplicacaoIdade = MinhaIdade * MaeIdade * PaiIdade;      // Operador de Multiplicações '*'
    int DivisaoIdade = MinhaIdade / MaeIdade / PaiIdade;            // Operador de Divisões '/'

    printf("Resultados das operacoes = %d , %d , %d\n", SomaIdade, MultiplicacaoIdade, DivisaoIdade); 
    // Nesse caso ele printaria Resultados das operacoes = 108 , 37506 , 0 , pq a divisão daria um numero quebrado ou seja ele arredonda pra zero mas o correto seria usar float
    
}