#include "./include/menus.h"
#include "./include/cadastros.h"
#include "./include/relatorios.h"
#include <stdio.h>

int main()
{
    opc_t opc, opc_1, opc_2, opc_3;

    // Criar as listas
    no_cliente_t *lista_clientes = NULL;
    no_livro_t *lista_livros = NULL;

    do {
        opc = principal();

        switch (opc) {

            case 1: do {
                        opc_1 = cadastros();

                        switch (opc_1) {

                            case 1: inserir_novo_livro(&lista_livros, novo_livro());
                                    break;
                            case 2: inserir_novo_cliente(&lista_clientes, novo_cliente());
                                    break;
                        }



                    } while (opc_1 != 3);
                    break;

            case 2: do {
                        opc_2 = relatorios();

                        switch (opc_2) {
                            case 1: relatorio_livros(lista_livros);
                                    break;
                            case 2: relatorio_clientes(lista_clientes);
                                    break;
                        }



                    } while (opc_2 != 3);
                    break;

            case 3: do {
                        opc_3 = exportacao_dados();

                        switch (opc_3) {
                            case 1: break;
                            case 2: break;
                            case 3: break;
                        }



                    } while (opc_3 != 4);
                    break;
        } 

    } while (opc != 0);

    return 0;
}