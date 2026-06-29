#include "../include/cadastros.h"
#include <stdio.h>
#include <stdlib.h>

livro_t novo_livro()
{
    livro_t novo;

    printf("Identificacao.......: ");
    scanf("%i", &novo.id);
    getchar();

    printf("Titulo do livro.....: ");
    fgets(novo.titulo, T_STR, stdin);

    printf("Autor do livro......: ");
    fgets(novo.autor_principal, T_STR, stdin);

    printf("Editora do livro....: ");
    fgets(novo.editora, T_STR, stdin);

    printf("Ano lancamento......: ");
    scanf("%i", &novo.ano_lancamento);

    return novo;
}

cliente_t novo_cliente()
{
    cliente_t novo;

    printf("Identificacao.....: ");
    scanf("%i", &novo.id);
    getchar();

    printf("Nome do cliente...: ");
    fgets(novo.nome, T_STR, stdin);

    printf("Idade do cliente..: ");
    scanf("%i", &novo.idade);

    return novo;
}

void inserir_novo_livro(no_livro_t **lista_livros, livro_t novo)
{
    no_livro_t *novo_livro = NULL;

    // Alocação dinâmica
    novo_livro = (no_livro_t*)malloc(sizeof(no_livro_t));

    novo_livro->dado = novo;
    novo_livro->prox = NULL;

    // Inserir na lista
    novo_livro->prox = *lista_livros;
    *lista_livros = novo_livro;
}

void inserir_novo_cliente(no_cliente_t **lista_clientes, cliente_t novo)
{
    no_cliente_t *novo_cliente = NULL;

    // Alocação dinâmica
    novo_cliente = (no_cliente_t*)malloc(sizeof(no_cliente_t));

    novo_cliente->dado = novo;
    novo_cliente->prox = NULL;

    // Inserir na lista
    novo_cliente->prox = *lista_clientes;
    *lista_clientes = novo_cliente;
}
