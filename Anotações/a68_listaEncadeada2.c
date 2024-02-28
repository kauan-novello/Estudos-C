#include <stdio.h>

int main(){

    int x = 5;
    
    struct lista{
        int valor;
        struct lista *proximo;
    }m[x];
    
    struct lista *gancho = &m[0];
    
    for (int i = 0; i < x; i++){
       scanf("%d", &m[i].valor);
       if (i != x-1){
         m[i].proximo = &m[i+1];
       } else{
        m[i].proximo = NULL; 
       }
    }

    while (gancho != NULL){
        printf("%d\n", gancho->valor);
        gancho = gancho->proximo;
    }

    return 0;       
}