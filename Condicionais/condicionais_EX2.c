#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//FAÇA UM PROGRAMA QUE LEIA DOIS NUMEROS INTEIRO E IMPRIMA NA TELA SE A SOMA DELES É:
//MAIOR OU IGUAL A 10 OU MENOR OU IGUAL A 10.

void main(){
    
    int a, b;
    //Leitura dos Valores
    scanf("%d", &a);
    scanf("%d", &b);
    
    //Comparação dos Números
    if(a > b){
        printf("A é maior que B");
    }else if(a < b){
        printf("A é menor que B");
    }else{
        printf("A e B são Iguais");
    }

}