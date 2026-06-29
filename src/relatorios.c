#include "../include/relatorios.h"
#include <stdio.h>

void relatorio_clientes(no_cliente_t *lista_clientes)
{
    for (lista_clientes; lista_clientes != NULL; lista_clientes = lista_clientes->prox) {
        mostrar_dados_cliente(lista_clientes->dado);
    }
}

void relatorio_livros(no_livro_t *lista_livros)
{
    while (lista_livros) {
        mostrar_dados_livro(lista_livros->dado);
        lista_livros = lista_livros->prox;
    }
}

void mostrar_dados_cliente(cliente_t cliente)
{
    printf("Identificacao.....: %i\n", cliente.id);
    printf("Nome do cliente...: %s\n", cliente.nome);
    printf("Idade do cliente..: %i\n\n", cliente.idade);
}

void mostrar_dados_livro(livro_t livro)
{
    printf("Identificacao.......: %i\n", livro.id);
    printf("Titulo do livro.....: %s\n", livro.titulo);
    printf("Autor do livro......: %s\n", livro.autor_principal);
    printf("Editora do livro....: %s\n", livro.editora);
    printf("Ano lancamento......: %i\n\n", livro.ano_lancamento);
}
