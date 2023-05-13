#include <stdio.h>
#include <stdlib.h>

#include "patients.h"

//'MainMenu' function which will be called to start the program according to the option chosen by the user.
void MainMenu()
{

    int option;
    char out = ' ';

    while (option != 4)
    {
        printf("==== Menu Principal ====\n");
        printf("1 - Cadastrar Paciente\n");
        printf("2 - Buscar Paciente\n");
        printf("3 - Pagar Paciente\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Funcao ainda nao implementada");
            break;
        case 2:
            printf("Funcao ainda nao implementada");
            break;
        case 3:
            printf("Funcao ainda nao implementada");
            break;
        case 4:
            printf("Tem certeza que deseja sair? (S/N): ");
            scanf("%*c%c", &out);
            if (out == 'S' || out == 's')
            {
                break;
            }
            else if (out == 'N' || out == 'n')
            {
                MainMenu();
            }

            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }

        printf("\n");
    }
}
