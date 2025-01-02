#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    
    int a;
    //Leitura dos Valores
    scanf("%d", &a);

    //O Operador % vai informar o resto de uma divisão, de determinado número divido por um outro número. 
    if(a % 2 == 0){
        printf("Número Par");
    }else{
        printf("Número Impar");
    }
}