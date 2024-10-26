#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int dia, mes,ano;
}Data;

typedef struct
{
    char nome[50];
    Data data;
}Pessoa;

typedef struct no
{
    Pessoa p;
    struct no *proximo;
    
}No;


Pessoa ler_pessoa() {
    Pessoa p;
    
    printf("\nDigite o nome: ");
    fgets(p.nome, 50, stdin);
    p.nome[strcspn(p.nome, "\n")] = 0;

    printf("\nDigite sua data de Nascimento: ");
    scanf("%d %d %d", &p.data.dia, &p.data.mes, &p.data.ano);
    getchar();

    return p;
}

void imprimir_pessoa(Pessoa p) {
    printf("\n Nome : %s\n Data: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);

}

No* empilhar(No *topo) {
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->p = ler_pessoa();
        novo->proximo = topo;
        return novo;
    } 
    else {
        printf("\n Erro na alocação \n");
    }
    return NULL;
}

No* desempilhar(No **topo){
    if (*topo != NULL)
    {
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;
    } else{
        printf("\nNo nao encontrado\n");
        return NULL;
    }
}

void imprimir_pilha(No *topo){
    printf("\n************** INICIO ***************\n");
    while (topo != NULL)
    {
        imprimir_pessoa(topo->p);
        topo = topo->proximo;
    }
    

    printf("\n*************** FIM *****************\n");
}

void liberar_memoria(No *topo){
    No *aux;

    while (topo != NULL)
    {
        aux = topo;
        topo = topo->proximo;
        free(aux);
    }
    
}


int main() {

    No *remover, *topo = NULL;
    int opcao;

    do {
        printf("\n 0 - sair , 1 = empilhar, 2 = desempilhar, 3 = imprimir\n");
        scanf("%d", &opcao);
        getchar();
        printf("\n opcao = %d\n", opcao);
  
        switch (opcao)
        {
        case 1:
            topo = empilhar(topo);
            break;
        case 2:
            remover = desempilhar(&topo);
            if (remover){
                printf("\nElemento removido com sucesso:\n");
                imprimir_pessoa(remover->p);
                free(remover);
            } else
            {
                printf("\nSem no a remover.\n");
            }
            break;
        case 3:
                imprimir_pilha(topo);
            break;
        default:
            if(opcao != 0){
                printf("\nOpcao invalida!\n");
            }
        
        }
    } while (opcao != 0);

    liberar_memoria(topo);

    return 0;
}