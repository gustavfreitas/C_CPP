#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Exercício 17

/*

typedef struct No {
	int valor;
	struct No* prox;
} No;

void inserir_inicio(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return; 
    novo->valor = v;
    novo->prox = *head;
    *head = novo;
}

void imprime_lista(No* head) {
    No* p = head;
    while (p != NULL) {
        printf("[%d]", p->valor);
        p = p->prox;
    }
}

void main() {
    No* head = NULL;
    inserir_inicio(&head, 30);
    inserir_inicio(&head, 20);
    inserir_inicio(&head, 10);
    imprime_lista(head);
}

*/

// Exercício 18
/*
typedef struct No {
    int valor;
    struct No* prox;
} No;

void inserir_fim(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = v;
    novo->prox = NULL;
    if (*head == NULL) {
        *head = novo;
        return;
    }
    No* atual = *head;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novo;
}

void imprime_lista(No* head) {
    No* p = head;
    while (p != NULL) {
        printf("[%d]->", p->valor);
        p = p->prox;
    }
}

void main() {
    No* head = NULL;
    inserir_fim(&head, 30);
    inserir_fim(&head, 20);
    inserir_fim(&head, 10);
    imprime_lista(head);
    printf("[NULL]"); 
}
*/

// Exercício 19
/*
typedef struct No {
    int valor;
    struct No* prox;
} No;

void inserir_ordenado(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = v;
    //caso especial: lista vazia ou valor menor que a cabeça
    if (*head == NULL || v <= (*head)->valor) {
        novo->prox = *head;
        *head = novo;
        return;
    }
    //caso geral: encontrar a posição correta
    No* anterior = *head;
    No* atual = (*head)->prox;
    while (atual != NULL && atual->valor < v) {
        anterior = atual;
        atual = atual->prox;
    }
    anterior->prox = novo;
    novo->prox = atual;
}

void imprime_lista(No* head) {
    No* p = head;
    while (p != NULL) {
        printf("[%d]->", p->valor);
        p = p->prox;
    }
}

void main() {
    No* head = NULL;
    inserir_ordenado(&head, 30);
    inserir_ordenado(&head, 10);
    inserir_ordenado(&head, 20);
    inserir_ordenado(&head, 5);
    inserir_ordenado(&head, 25);
    imprime_lista(head);
    printf("[NULL]");

}
*/
// Exercício 20
/*
typedef struct No {
    int valor;
    struct No* prox;
} No;

No* buscar(No* head, int v) {
    No* atual = head;
    while (atual != NULL) {
        if (atual->valor == v) {
            return atual; //encontrado
        }
            atual = atual->prox;
    }
    return NULL; //não encontrado
}


void inserir_ordenado(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = v;
    //caso especial: lista vazia ou valor menor que a cabeça
    if (*head == NULL || v <= (*head)->valor) {
        novo->prox = *head;
        *head = novo;
        return;
    }
    //caso geral: encontrar a posição correta
    No* anterior = *head;
    No* atual = (*head)->prox;
    while (atual != NULL && atual->valor < v) {
        anterior = atual;
        atual = atual->prox;
    }
    anterior->prox = novo;
    novo->prox = atual;
}

void imprime_lista(No* head) {
    No* p = head;
    while (p != NULL) {
        printf("[%d]->", p->valor);
        p = p->prox;
    }
}

void main() {
    No* head = NULL;
    inserir_ordenado(&head, 10);
    inserir_ordenado(&head, 20);
    inserir_ordenado(&head, 30);
    inserir_ordenado(&head, 40);
    imprime_lista(head);
    printf("[NULL]");
}
*/

// Exercício 21
/*
typedef struct No {
    int valor;
    struct No* prox;
} No;

int apagar(No** head, int v) {
    if (*head == NULL) return 0; //lista vazia
    //caso 1: valor na cabeça
    if ((*head)->valor == v) {
        No* temp = *head;
        *head = (*head)->prox;
        free(temp);
        return 1;
    }
    //caso 2: valor em posição intermediária ou final
    No* anterior = *head;
    No* atual = (*head)->prox;
    while (atual != NULL) {
        if (atual->valor == v) {
            anterior->prox = atual->prox;
            free(atual);
            return 1;
        }
        anterior = atual;
        atual = atual->prox;
    }
    return 0;
}

void inserir_ordenado(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = v;
    //caso especial: lista vazia ou valor menor que a cabeça
    if (*head == NULL || v <= (*head)->valor) {
        novo->prox = *head;
        *head = novo;
        return;
    }
    //caso geral: encontrar a posição correta
    No* anterior = *head;
    No* atual = (*head)->prox;
    while (atual != NULL && atual->valor < v) {
        anterior = atual;
        atual = atual->prox;
    }
    anterior->prox = novo;
    novo->prox = atual;
}

void imprime_lista(No* head) {
    No* p = head;
    while (p != NULL) {
        printf("[%d]->", p->valor);
        p = p->prox;
    }
}

void main() {
    No* head = NULL;
    inserir_ordenado(&head, 10);
    inserir_ordenado(&head, 20);
    inserir_ordenado(&head, 30);
    inserir_ordenado(&head, 40);
    imprime_lista(head);
    printf("[NULL]");
}
*/

// Exercício 22

/*
typedef struct No {
    int valor;
    struct No* prox;
} No;

int apagar(No** head, int v) {
    if (*head == NULL) return 0; //lista vazia
    //caso 1: valor na cabeça
    if ((*head)->valor == v) {
        No* temp = *head;
        *head = (*head)->prox;
        free(temp);
        return 1;
    }
    //caso 2: valor em posição intermediária ou final
    No* anterior = *head;
    No* atual = (*head)->prox;
    while (atual != NULL) {
        if (atual->valor == v) {
            anterior->prox = atual->prox;
            free(atual);
            return 1;
        }
        anterior = atual;
        atual = atual->prox;
    }
    return 0;
}

void inserir_ordenado(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = v;
    //caso especial: lista vazia ou valor menor que a cabeça
    if (*head == NULL || v <= (*head)->valor) {
        novo->prox = *head;
        *head = novo;
        return;
    }
    //caso geral: encontrar a posição correta
    No* anterior = *head;
    No* atual = (*head)->prox;
    while (atual != NULL && atual->valor < v) {
        anterior = atual;
        atual = atual->prox;
    }
    anterior->prox = novo;
    novo->prox = atual;
}

void imprime_lista(No* head) {
    No* p = head;
    while (p != NULL) {
        printf("[%d]->", p->valor);
        p = p->prox;
    }
}

void zerar_lista(No** head) {
    No* atual = *head;
    while (atual != NULL) {
        No* prox = atual->prox; //salvar antes de liberar
        free(atual);
        atual = prox;
    }
    *head = NULL;
}

void main() {
    No* head = NULL;
    inserir_ordenado(&head, 10);
    inserir_ordenado(&head, 20);
    inserir_ordenado(&head, 30);
    inserir_ordenado(&head, 40);
    inserir_ordenado(&head, 50);
    zerar_lista(&head);
    imprime_lista(head);
    printf("[NULL] -- Lista Vazia");
}
*/

// Exercício 23

/*
typedef struct No {
    int valor;
    struct No* prox;
} No;

int apagar(No** head, int v) {
    if (*head == NULL) return 0; //lista vazia
    //caso 1: valor na cabeça
    if ((*head)->valor == v) {
        No* temp = *head;
        *head = (*head)->prox;
        free(temp);
        return 1;
    }
    //caso 2: valor em posição intermediária ou final
    No* anterior = *head;
    No* atual = (*head)->prox;
    while (atual != NULL) {
        if (atual->valor == v) {
            anterior->prox = atual->prox;
            free(atual);
            return 1;
        }
        anterior = atual;
        atual = atual->prox;
    }
    return 0;
}

void inserir_inicio(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = v;
    novo->prox = *head;
    *head = novo;
}

void inserir_ordenado(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = v;
    //caso especial: lista vazia ou valor menor que a cabeça
    if (*head == NULL || v <= (*head)->valor) {
        novo->prox = *head;
        *head = novo;
        return;
    }
    //caso geral: encontrar a posição correta
    No* anterior = *head;
    No* atual = (*head)->prox;
    while (atual != NULL && atual->valor < v) {
        anterior = atual;
        atual = atual->prox;
    }
    anterior->prox = novo;
    novo->prox = atual;
}

void inserir_fim(No** head, int v) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = v;
    novo->prox = NULL;
    if (*head == NULL) {
        *head = novo;
        return;
    }
    No* atual = *head;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novo;
}

void imprime_lista(No* head) {
    No* p = head;
    while (p != NULL) {
        printf("[%d]->", p->valor);
        p = p->prox;
    }
}

void reordenar_lista(No* head) {
    if (head == NULL) return;
    for (No* i = head; i->prox != NULL; i = i->prox) {
        No* menor = i;
        for (No* j = i->prox; j != NULL; j = j->prox) {
            if (j->valor < menor->valor) {
                menor = j;
            }
        }
        if (menor != i) {
            int temp = i->valor;
            i->valor = menor->valor;
            menor->valor = temp;
        }
    }
}

void main() {
    No* head = NULL;
    inserir_inicio(&head, 50);
    inserir_fim(&head, 10);
    inserir_fim(&head, 40);
    inserir_inicio(&head, 20);
    inserir_inicio(&head, 30);
    reordenar_lista(head);
    imprime_lista(head);
    printf("[NULL]");
}
*/
