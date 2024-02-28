#include <stdio.h>
 
int main() {
 
    int gst_hrs, velocidade, kms;
    float result;
    
    scanf("%d", &gst_hrs); 
    scanf("%d", &velocidade);

    kms = gst_hrs * velocidade; 
    result = (float) kms / 12;

    printf("%.3f\n", result);
    
    return 0;
}
