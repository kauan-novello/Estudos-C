// malloc == memory allocation

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p = (int *)malloc(sizeof(int));
    printf("%i", *p);

}