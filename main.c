#include "./include/menus.h"

int main()
{
    opc_t opc, opc_1, opc_2, opc_3;

    do {
        opc = principal();

        switch (opc) {

            case 1: do {
                        opc_1 = cadastros();

                        switch (opc_1) {
                            case 1: break;
                            case 2: break;
                        }



                    } while (opc_1 != 3);
                    break;

            case 2: do {
                        opc_2 = relatorios();

                        switch (opc_2) {
                            case 1: break;
                            case 2: break;
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