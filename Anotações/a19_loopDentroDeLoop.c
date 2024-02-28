#include <stdio.h>

int main(void){

    for(int i = 1; i <= 10; i++){
        printf("----Lista %d----\n", i);
        for (int j = 1; j <= 10; j++){
           printf("Item %d\n", j);
        }
        printf("\n");
    }
    return 0;
}