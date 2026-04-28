#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    No* esquerda;
    No* direita;
} No;

No* criar_no(int v) {
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = v;
    novo->esquerda = NULL;
    novo->direita = NULL;

    return novo;
}
No* inserir_raiz(No* raiz, int v) {
    if (raiz == NULL)
        return criar_no(v);
        
        if (v < raiz->valor) 
            raiz->esquerda = inserir_raiz(raiz->esquerda, v);
        else if (v > raiz->valor) 
            raiz->direita = inserir_raiz(raiz->direita, v);
        return raiz;
        
    }

void main() {
    No* raiz = NULL;

    raiz = inserir_raiz(raiz, 50);
    raiz = inserir_raiz(raiz, 30);
    raiz = inserir_raiz(raiz, 20);
    
    printf("%d" "%d" "%d", raiz->direita->esquerda, raiz->valor, raiz->esquerda);

}
