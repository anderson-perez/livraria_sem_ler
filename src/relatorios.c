#include "../include/relatorios.h"
#include <stdio.h>

void relatorio_clientes(no_cliente_t *lista_clientes)
{
    for (lista_clientes; lista_clientes != NULL; lista_clientes = lista_clientes->prox) {
        mostrar_dados_cliente(lista_clientes->dado, stdout);
    }
}

void relatorio_livros(no_livro_t *lista_livros)
{
    while (lista_livros) {
        mostrar_dados_livro(lista_livros->dado, stdout);
        lista_livros = lista_livros->prox;
    }
}

void mostrar_dados_cliente(cliente_t cliente, FILE *arquivo)
{
    fprintf(arquivo, "Identificacao.....: %i\n", cliente.id);
    fprintf(arquivo, "Nome do cliente...: %s\n", cliente.nome);
    fprintf(arquivo, "Idade do cliente..: %i\n\n", cliente.idade);
}

void mostrar_dados_livro(livro_t livro, FILE *arquivo)
{
    fprintf(arquivo, "Identificacao.......: %i\n", livro.id);
    fprintf(arquivo, "Titulo do livro.....: %s\n", livro.titulo);
    fprintf(arquivo, "Autor do livro......: %s\n", livro.autor_principal);
    fprintf(arquivo, "Editora do livro....: %s\n", livro.editora);
    fprintf(arquivo, "Ano lancamento......: %i\n\n", livro.ano_lancamento);
}
