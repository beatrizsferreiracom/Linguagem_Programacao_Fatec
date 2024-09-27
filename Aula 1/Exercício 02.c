//Soma

// As bibliotecas declaradas
#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
    //Definir linguagem dos caracteres
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int n1, n2, total;

    //Informar os dois valores - Procedimento de Entrada
    printf("Digite o primeiro n�mero:\n");
    scanf("%i", &n1);
    printf("Digite o segundo n�mero:\n");
    scanf("%i", &n2);

    //Operação matemática - Processamento
    total=n1+n2;

    //Mostrar o valor total - Processamento de Saída
    printf("Soma = %i", total);

    //Segura o programa executando
    getch();
    return 0;
}
