#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Exercício 26

/*

typedef struct No {
	int valor;
    No* prox;
    No* ant;
} No;

void inserir_inicio(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = v;
    novo->ant = NULL;
    novo->prox = *head;

    if (*head != NULL) {
        (*head)->ant = novo;
    }
    *head = novo;
}

void imprime_frente(No* p) {
    while (p != NULL) {
        printf("[%d]->", p->valor);
        p = p->prox;
    }
    printf("NULL\n");
}


void imprime_traz(No* p) {
    while (p != NULL) {
        printf("[%d]->", p->valor);
        p = p->prox;
    }
    while (p != NULL) {
        printf("[%d]->", p->valor);
    }
}

void main() {
    No* head = NULL;
    inserir_inicio(&head, 10);
    imprime_traz(head);
    inserir_inicio(&head, 20);
    imprime_frente(head);
    inserir_inicio(&head, 30);
    imprime_traz(head);
    inserir_inicio(&head, 40);
    imprime_frente(head);
    printf("[NULL]");
}

*/

// Exercício 27

/*

typedef struct No {
    int valor;
    No* prox;
    No* ant;
} No;

void inserir_inicio(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = v;
    novo->ant = NULL;
    novo->prox = *head;

    if (*head != NULL) {
        (*head)->ant = NULL;
    }
    *head = novo;
}

void imprime_frente(No* p) {
    while (p != NULL) {
        p = p->prox;
    }
    printf("NULL\n");
}

void imprime_traz(No* p) {
    while (p != NULL) {
        printf("[%d]->", p->valor);
        p = p->ant;
    }
}

void inserir_fim(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = v;
    novo->prox = NULL;

    if (*head == NULL) {
        *head = novo;
        novo->ant = NULL;
        return;
    }

    No* p = *head;
    while (p->prox != NULL) {
        p = p->prox;
    }
    p->prox = novo;
    novo->ant = p;
}

void main() {
    No* head = NULL;
    inserir_inicio(&head, 10);
    imprime_traz(head);
    inserir_inicio(&head, 20);
    imprime_frente(head);
    inserir_inicio(&head, 30);
    imprime_traz(head);
    inserir_inicio(&head, 40);
    imprime_frente(head);
    printf("[NULL]");
}

*/

// Exercício 28

typedef struct No {
    int valor;
    No* prox;
    No* ant;
} No;

void inserir_inicio(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = v;
    novo->ant = NULL;
    novo->prox = *head;

    if (*head != NULL) {
        (*head)->ant = NULL;
    }
    *head = novo;
}

void imprime_frente(No* p) {
    while (p != NULL) {
        p = p->prox;
    }
    printf("NULL\n");
}

void imprime_traz(No* p) {
    while (p != NULL) {
        printf("[%d]->", p->valor);
        p = p->ant;
    }
}

void inserir_fim(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = v;
    novo->prox = NULL;

    if (*head == NULL) {
        *head = novo;
        novo->ant = NULL;
        return;
    }

    No* p = *head;
    while (p->prox != NULL) {
        p = p->prox;
    }
    p->prox = novo;
    novo->ant = p;
}

void main() {
    No* head = NULL;
    inserir_inicio(&head, 10);
    imprime_traz(head);
    inserir_inicio(&head, 20);
    imprime_frente(head);
    inserir_inicio(&head, 30);
    imprime_traz(head);
    inserir_inicio(&head, 40);
    imprime_frente(head);
    inserir_inicio(&head, 50);
    printf("[NULL]");
}

