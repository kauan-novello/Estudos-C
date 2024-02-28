#include <stdio.h>

int main(){
    void testeVar(int x);
    void testPnt(int *pX);
    int teste = 1;
    int *pTeste = &teste;

    testeVar(teste);
    printf("%d %d\n", teste, *pTeste);

    testPnt(pTeste);
    printf("%d %d", teste, *pTeste);

    return 0;
}
void testeVar(int x){
    ++x;
}
void testPnt(int *pX){
    ++*pX;
}