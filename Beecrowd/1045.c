/*

    Tipos de Triângulos

    Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, 
    de modo que o lado A representa o maior dos 3 lados. 
    
    A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, 
    sempre escrevendo uma mensagem adequada:
    
    se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
    se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
    se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
    se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
    se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
    
    Entrada
    A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

    Saída
    Imprima todas as classificações do triângulo especificado na entrada.

*/
#include <stdio.h>

int main(){

    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if(a > 0 && b > 0 && c > 0){ //tratamento de entradas > 0

        if (a < b) {    // Ordenando os valores em ordem decrescente
            float temp = a;
            a = b;
            b = temp;
        }
        if (a < c) {
            float temp = a;
            a = c;
            c = temp;
        }
        if (b < c) {
            float temp = b;
            b = c;
            c = temp;
        }              
        // ordenado - teste: printf("%f %f %f", a,b,c);

        if (a >= b+c){printf("NAO FORMA TRIANGULO\n");}                           //se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
        else {
            if (a*a == (b*b + c*c)){printf("TRIANGULO RETANGULO\n");}             //se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
            else if (a*a > (b*b + c*c)){printf("TRIANGULO OBTUSANGULO\n");}       //se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
            else if (a*a < (b*b + c*c)){printf("TRIANGULO ACUTANGULO\n");}        //se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
        }    
        
        if (a == b && b == c){printf("TRIANGULO EQUILATERO\n");}                  //se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
        else if (a == b || b == c || a == c){printf("TRIANGULO ISOSCELES\n");}    //se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

    }else{
        return 0;
    }
    
}