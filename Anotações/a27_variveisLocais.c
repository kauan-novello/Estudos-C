//Esse código mostra a diferença entra um varivel local automatica e uma static.
#include <stdio.h>

int main(){

    void teste();

    for (int i = 0; i < 3; i++){
       varLocalAutomatica();
    }

    printf("\n");
    
    for (int i = 0; i < 3; i++)
    {
       varLocalStatic();
    }    

    return 0;
}

void varLocalAutomatica(){

    int varLocal = 2;
    varLocal *= 2;

    printf("%d\n", varLocal);
}
//por serem variveis locais eu posso até repetir o nome
void varLocalStatic(){

    static int varLocal = 2; 
    varLocal *= 2;

    printf("%d\n", varLocal);
}