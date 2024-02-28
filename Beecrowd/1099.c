#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    for (int j = 0; j < n; j++) {
        int x, y;
        scanf("%d %d", &x, &y);
        int ma, me, soma;
        soma = 0;

        if (x > y) {
            ma = x;
            me = y;
        } else {
            me = x;
            ma = y; 
        }
        
        for (int i = me + 1; i < ma; i++) {
            if (i % 2 == 1) { 
                soma += i;
            }
        }
             
        printf("%d\n", soma);
    }

    return 0;
}
