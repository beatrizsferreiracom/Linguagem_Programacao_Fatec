//Uso de condicional

// As bibliotecas declaradas
#include<stdio.h>
#include<conio.h>
#include<locale.h>

main() {

    //Definir linguagem dos caracteres
    setlocale(LC_ALL, "Portuguese");

    //Declaraçãoo das variáveis
    int n1, n2, r;

    //Informar os dois valores - Procedimento de Entrada
    printf("Digite o primeiro número:\n");
    scanf("%i", &n1);
    printf("Digite o segundo número:\n");
    scanf("%i", &n2);

    //Operação matemática - Processamento
    r=n1+n2;

    //Procedimento de Saída de Dados
    printf("Resultado: %i \n", r);

    /*    Condicional - Sendo que Variável r for maior ou igual 10, então condição é verdadeira. */
    if (r>10){
        //Procedimento de Saída - Mostra a Mensagem
        printf("Número Maior que 10");
    }
    /* Caso a variável não seja maior ou igual 10, então condição é falsa, e assim, executará os comandos que estão abaixo do else */
    else if (r<10){
        //Procedimento de Saída - Mostra a Mensagem.
        printf("Número Menor que 10");
    }
    else{
        printf("Número igual a 10");
    }
    //Segura o programa executando
    getch();
    return 0;
}
