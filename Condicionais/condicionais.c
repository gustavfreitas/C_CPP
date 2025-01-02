#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){
    
    int idade; //Define o valor da variavel "idade"
    
    scanf("%d", &idade); //Lê o valor "idade"
    
    //Analise se o valor é maior que:
    
    //O If vai analisar se o primeiro código vai ser executado.
    
    //Caso o código if tenha como falso, o Else seria a outra opção.
   
    //Else if é uma outra possibilidade em casos especificos de se If for dado como falso.
    
    if(idade < 17){
    printf("Menor de idade");
    }else if(idade == 18){
        printf("Tem que se alistar");
    }else{
        printf("Maior de Idade");
    }
}