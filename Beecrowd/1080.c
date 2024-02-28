#include <stdio.h>
 
int main() {

    int n, p, m = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &n);
        if(n > m){
            m = n;
            p = i + 1;
        }
    }
    
    printf("%d\n", m);
    printf("%d\n", p);
    return 0;
}