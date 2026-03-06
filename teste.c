#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int opcaoMenu = 0;
    int saldo = 200;
    int deposito;
    int saque;

    // enquanto o usuário não digitar 4: ficará sendo perguntado oque ele deseja fazer
    while (opcaoMenu != 4)
    {
        printf("Digite\n");
        printf("1- Consultar saldo\n");
        printf("2- Depositar\n");
        printf("3- Sacar\n");
        printf("4- Sair\n");

        printf("\nOque deseja fazer? ");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu)
        {
            // consular saldo
        case 1:
            printf("\n\nSeu saldo é R$ %d\n\n", saldo);
            break;

            // Depositar
        case 2:
            printf("\nQuantos reais deseja depositar? ");
            scanf(" %d", &deposito);
            // Impedi de o usuário depositar zero e um valor negativo
            if (deposito == 0)
            {
                printf("\n\nNão é possível depositar zero\n\n");
                continue;
            }
            else if (deposito < 0)
            {
                printf("\n\nNão é possível depositar um valor negativo\n\n");
                continue;
            }

            saldo += deposito;
            printf("\n\nDepósito realizado com sucesso!\n Seu saldo agora é R$%d\n\n", saldo);

            break;

            // Sacar
        case 3:
            printf("\nQuantos reais deseja sacar? ");
            scanf(" %d", &saque);

            // Impedi de o usuário sacar zero e um valor negativo
            if (saque == 0)
            {
                printf("\n\nNão é possível sacar zero\n\n");
                continue;
            }
            else if (saque < 0)
            {
                printf("\n\nNão é possível sacar um valor negativo\n\n");
                continue;
            }

            // impedi de o usuário sacar um valor que ele não tem
            if (saque > saldo)
            {
                printf("\n\nVocê não possui este valor na conta.\n\n");
            }
            else
            {
                saldo -= saque;
                printf("\n\nSaque realizado com sucesso!\n Seu saldo agora é R$%d\n\n", saldo);
            }

            break;

            // Sair
        case 4:
            printf("Saindo...\n");
            return 0;

        default:
            printf("\n\nOpção inválida!\n\n");
        }
    }
}
