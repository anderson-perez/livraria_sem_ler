#ifndef _ARQUIVOS_H_
#define _ARQUIVOS_H_

#include <stdio.h>
#include "types.h"

// Arquivo binário
void salvar_lista_livros(no_livro_t *lista, FILE *arquivo);
void salvar_lista_clientes(no_cliente_t *lista, FILE *arquivo);
void ler_dados_livros(FILE *arquivo, no_livro_t **lista);
void ler_dados_clientes(FILE *arquivo, no_cliente_t **lista);

// Arquivo texto
void exportar_dados_livros_txt(no_livro_t *lista, FILE *arquivo);
void exportar_dados_livros_csv(no_livro_t *lista, FILE *arquivo);
void exportar_dados_livros_html(no_livro_t *lista, FILE *arquivo);

void exportar_dados_clientes_txt(no_cliente_t *lista, FILE *arquivo);
void exportar_dados_clientes_csv(no_cliente_t *lista, FILE *arquivo);
void exportar_dados_clientes_html(no_cliente_t *lista, FILE *arquivo);

#endif