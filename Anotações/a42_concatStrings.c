#include <stdio.h>
//por enquanto não iremos usar a biblioteca string.h para aprender a fundo como funciona em C

int main(){

    char string1[] = {'p','a','o',' '};
    char string2[] = {'m','o','r','t','a','d','e','l','a'};
    char newString[13];

    concatenarStrings(char string1[], int t1, char string2[], int t2){

        for (i = 0; i < t1; i++)
        {
            newString[i] = string1[i];
        }
        

    }

    newString[13] = concatenarStrings(string1, string2);

    for (int i = 0; i < 13; i++){
        printf("%c", newString[i]);
    }
    
    return 0;
}