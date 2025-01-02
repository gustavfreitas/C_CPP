#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//FAÇA UM PROGRAMA QUE LEIA DOIS NUMEROS INTEIRO E IMPRIMA NA TELA SE A SOMA DELES É:
//MAIOR OU IGUAL A 10 OU MENOR OU IGUAL A 10.

void main(){
    
    int a = 5, b = 2, soma;
    scanf("%d", &a);
    scanf("%d", &b);
    
    if(soma >= 10){
        printf("Maior ou Igual a 10");
    }else{
        printf("Menor ou Igual a 10");
    }
    
}