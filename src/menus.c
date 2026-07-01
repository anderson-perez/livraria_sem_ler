#include "../include/menus.h"
#include <stdio.h>

opc_t principal()
{
    opc_t opc;

    printf("1.Cadastros\n");
    printf("2.Relatorios\n");
    printf("3.Exportacao de dados\n");
    printf("4.Consulas\n");
    printf("5.Exclusao de registros\n");
    printf("0.Sair do programa\n");
    printf(":: ");
    scanf("%i", &opc);
    getchar();

    return opc;
}

opc_t relatorios()
{
    opc_t opc;

    printf("1.Livros\n");
    printf("2.Clientes\n");
    printf("3.Retornar ao menu principal\n");  
    printf(":: ");
    scanf("%i", &opc);
    getchar();

    return opc;
}

opc_t cadastros()
{
    opc_t opc;

    printf("1.Livros\n");
    printf("2.Clientes\n");
    printf("3.Retornar ao menu principal\n");  
    printf(":: ");
    scanf("%i", &opc);
    getchar();

    return opc;
}

opc_t exportacao_dados()
{
    opc_t opc;

    printf("1.Arquivo texto\n");
    printf("2.Arquivo html\n");
    printf("3.Arquivo csv\n");
    printf("4.Retornar ao menu principal\n");  
    printf(":: ");
    scanf("%i", &opc);
    getchar();

    return opc;
}

opc_t consultas()
{
    opc_t opc;

    printf("1.Consultar livro por nome\n");
    printf("2.Consultar cliente por nome\n");
    printf("4.Retornar ao menu principal\n");  
    printf(":: ");
    scanf("%i", &opc);
    getchar();

    return opc;

}

opc_t exclusao()
{
    opc_t opc;

    printf("1.Excluir livro\n");
    printf("2.Excluir cliente\n");
    printf("3.Retornar ao menu principal\n");  
    printf(":: ");
    scanf("%i", &opc);
    getchar();

    return opc;

}