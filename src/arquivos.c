#include "../include/arquivos.h"
#include "../include/relatorios.h"
#include <stdlib.h>

// Arquivo binário
void salvar_lista_livros(no_livro_t *lista, FILE *arquivo)
{
    while (lista) {
        fwrite(&lista->dado, sizeof(livro_t), 1, arquivo);
        lista = lista->prox;
    }
}

void salvar_lista_clientes(no_cliente_t *lista, FILE *arquivo)
{
    while (lista) {
        fwrite(&lista->dado, sizeof(cliente_t), 1, arquivo);
        lista = lista->prox;
    }
}

void ler_dados_livros(FILE *arquivo, no_livro_t **lista)
{
    while (!feof(arquivo)) {
        livro_t novo;
        fread(&novo, sizeof(livro_t), 1, arquivo);
        if (!feof(arquivo)) {
            no_livro_t *novo_no = (no_livro_t*)malloc(sizeof(no_livro_t));
            novo_no->dado = novo;
            novo_no->prox = NULL;
            // Inserir na lista
            novo_no->prox = *lista;
            *lista = novo_no;            
        }
    }
}

void ler_dados_clientes(FILE *arquivo, no_cliente_t **lista)
{
    while (!feof(arquivo)) {
        cliente_t novo;
        fread(&novo, sizeof(cliente_t), 1, arquivo);
        if (!feof(arquivo)) {
            no_cliente_t *novo_no = (no_cliente_t*)malloc(sizeof(no_cliente_t));
            novo_no->dado = novo;
            novo_no->prox = NULL;
            // Inserir na lista
            novo_no->prox = *lista;
            *lista = novo_no;            
        }
    }

}

// Arquivo texto
void exportar_dados_livros_txt(no_livro_t *lista, FILE *arquivo)
{
    for (lista; lista != NULL; lista = lista->prox) {
        mostrar_dados_livro(lista->dado, arquivo);
    }
}

void exportar_dados_livros_csv(no_livro_t *lista, FILE *arquivo)
{

}

void exportar_dados_livros_html(no_livro_t *lista, FILE *arquivo)
{

}

void exportar_dados_clientes_txt(no_cliente_t *lista, FILE *arquivo)
{
    while (lista) {
        mostrar_dados_cliente(lista->dado, arquivo);
        lista = lista->prox;
    }

}

void exportar_dados_clientes_csv(no_cliente_t *lista, FILE *arquivo)
{

}

void exportar_dados_clientes_html(no_cliente_t *lista, FILE *arquivo)
{

}
