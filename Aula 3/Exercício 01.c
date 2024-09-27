//Switch case

#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");

    //Variável com valores positivos
    unsigned int n;

    //Procedimento - Entrada de Dados
    printf("Digite o número ");
    scanf("%u", &n);

    //Procedimento - Saída de Dados
    printf("Número: %u\n", n);

    //Caso a variável n assuma algum dos casos abaixo.
    switch(n)
    {
        case 0:
        {
            printf("Você digitou o número 0");
            break;
        }
        case 1:
        {
            printf("Você digitou o número 1");
            break;
        }
        case 2:
        {
            printf("Você digitou o número 2");
            break;
        }
        case 3:
        {
            printf("Você digitou o número 3");
            break;
        }
        case 4:
        {
            printf("Você digitou o número 4");
            break;
        }
        case 5:
        {
            printf("Você digitou o número 5");
            break;
        }
    //Portanto, caso a variável n não seja nenhum dos valores acima.
        default:
        {
            printf("Número fora da escala");
            break;
        }
    }
    getch();
}
