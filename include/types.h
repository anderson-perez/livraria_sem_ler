#ifndef _TYPES_H
#define _TYPES_H

#define T_STR   100

typedef unsigned int opc_t;
typedef char string[T_STR];
typedef unsigned int uint_t;

typedef struct livro {    
    uint_t id;
    string titulo;
    string editora;
    string autor_principal;
    uint_t ano_lancamento;    
} livro_t;


typedef struct cliente {
    uint_t id;
    string nome;
    uint_t idade;
} cliente_t;

typedef struct no_livro {
    livro_t dado;
    struct no_livro *prox;
} no_livro_t;

typedef struct no_cliente {
    cliente_t dado;
    struct no_cliente *prox;
} no_cliente_t;

#endif