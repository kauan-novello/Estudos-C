#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    int *p = (int *) malloc(sizeof(int));

    *p = 1000;

    free(p);

    printf("%i", *p);

    return 0;
}
