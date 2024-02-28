#include <stdio.h>

int main(){
    int num_resto_0;

    for (num_resto_0 = 0; num_resto_0 < 100; num_resto_0++){
        if (!(num_resto_0 % 2)){
            printf("O numero %d eh par\n", num_resto_0);
        }
    }
    
}