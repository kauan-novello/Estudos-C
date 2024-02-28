int x = 1; 
int y = 2;
int z[20];

int *ip; // ip é um ponteiro para inteiro
//*ip = NULL; boa pratica

ip = &x; // ip aponta pro endereço de x, para apontar não se usa o *

y = *ip; // y é 1 agora, uma vez que ele está recebendo o valor que ip está apontando

*ip = 0; // o ponteiro ip agora recebe o valor 0, consequentemente todos os locais que ele aponta recebem 0, no caso x agora é = 0

ip = z; // ip agora aponta pra z; não usa $ pq é um array(ponteiro constante em espaço pre alocado)