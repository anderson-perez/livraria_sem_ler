#ifndef _CADASTROS_H
#define _CADASTROS_H

#include "types.h"

livro_t novo_livro();
cliente_t novo_cliente();
void inserir_novo_livro(no_livro_t **lista_livros, livro_t novo);
void inserir_novo_cliente(no_cliente_t **lista_clientes, cliente_t novo);


#endif