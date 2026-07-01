#include "./include/menus.h"
#include "./include/cadastros.h"
#include "./include/relatorios.h"
#include "./include/arquivos.h"
#include <stdio.h>

int main()
{
    opc_t opc, opc_1, opc_2, opc_3;

    // Criar as listas
    no_cliente_t *lista_clientes = NULL;
    no_livro_t *lista_livros = NULL;
    FILE *fp = NULL;

    // Abrir arquivos
    fp = fopen("./base_dados/livros.bin", "rb");
    if (fp) {
        ler_dados_livros(fp, &lista_livros);
        fclose(fp);
    }

    fp = fopen("./base_dados/clientes.bin", "rb");
    if (fp) {
        ler_dados_clientes(fp, &lista_clientes);
        fclose(fp);
    }

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
                            case 1: fp = fopen("livros.txt", "w");
                                    exportar_dados_livros_txt(lista_livros, fp);
                                    fclose(fp);
                                    break;
                            case 2: fp = fopen("clientes.txt", "w");
                                    exportar_dados_clientes_txt(lista_clientes, fp);
                                    fclose(fp);
                                    break;
                            case 3: break;
                        }



                    } while (opc_3 != 4);
                    break;
        } 

    } while (opc != 0);

    // Abrir arquivos
    fp = fopen("./base_dados/livros.bin", "wb");
    if (fp) {
        salvar_lista_livros(lista_livros, fp);
        fclose(fp);
    }

    fp = fopen("./base_dados/clientes.bin", "wb");
    if (fp) {
        salvar_lista_clientes(lista_clientes, fp);
        fclose(fp);
    }

    


    return 0;
}