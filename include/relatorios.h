#ifndef _RELATORIOS_H
#define _RELATORIOS_H

#include "types.h"
#include <stdio.h>

void relatorio_clientes(no_cliente_t *lista_clientes);
void relatorio_livros(no_livro_t *lista_livros);
void mostrar_dados_cliente(cliente_t cliente, FILE *arquivo);
void mostrar_dados_livro(livro_t livro, FILE *arquivo);


#endif