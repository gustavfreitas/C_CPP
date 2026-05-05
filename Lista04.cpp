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
    if (novo == NULL) return NULL; 
    novo->valor = v;
    novo->esquerda = NULL;
    novo->direita = NULL;

    return novo;
}

No* inserir_raiz(No* raiz, int v) {
    
    if (raiz == NULL) {
        return criar_no(v);
    }
    if (v < raiz->valor) {
        raiz->esquerda = inserir_raiz(raiz->esquerda, v); 
    }
    else if (v > raiz->valor) {
        raiz->direita = inserir_raiz(raiz->direita, v); 
    }
    
    return raiz;
}

No* buscar(No* raiz, int v) {
    if (raiz == NULL) return NULL;
    if (v < raiz->valor)
        buscar(raiz->esquerda, v);
    if (v > raiz->valor)
        return buscar(raiz->direita, v);
    return raiz;
}

No* minimo(No* raiz) {
    while (raiz != NULL && raiz->esquerda != NULL) {
        raiz = raiz->esquerda;
    }
    return raiz;
}
No* remover(No* raiz, int v) {
    if (raiz == NULL) return NULL; 
    if (v < raiz->valor) {
        raiz->esquerda = remover(raiz->esquerda, v);
    }
    else if (v > raiz->valor) {
        raiz->direita = remover(raiz->direita, v);
    }
    else {
        
        if (raiz->esquerda == NULL && raiz->direita == NULL) {
            free(raiz);
            return NULL;
        }
        
        if (raiz->esquerda == NULL) {
            No* filho = raiz->direita;
            free(raiz);
            return filho;
        }
        
        if (raiz->direita == NULL) {
            No* filho = raiz->esquerda;
            free(raiz);
            return filho;
        }
        
        No* sucessor = minimo(raiz->direita); 
        raiz->valor = sucessor->valor; 
        raiz->direita = remover(raiz->direita, sucessor->valor); 
    }
    return raiz;
}

    void main() {
        No* raiz = NULL;

        raiz = inserir_raiz(raiz, 50);
        raiz = inserir_raiz(raiz, 30);
        raiz = remover(raiz, 30);
        raiz = inserir_raiz(raiz, 70);
        raiz = inserir_raiz(raiz, 20);
        raiz = inserir_raiz(raiz, 40);

        printf("Raiz: %d\n", raiz->valor); //50
        printf("Esq da raiz: %d\n", raiz->esquerda->valor); //30
        printf("Dir da raiz: %d\n", raiz->direita->valor); //70
        printf("Esq-Esq: %d\n", raiz->esquerda->esquerda->valor); //20
        printf("Esq-Dir: %d\n", raiz->esquerda->direita->valor); //40
    }
