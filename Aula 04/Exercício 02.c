//Tabuada com While

//Declaração das bibliotecas
#include<stdio.h>
#include<conio.h>

//Procedimento Principal main ()

main()
{
    //Declaração das Variáveis com o modificador unsigned
    //Ou seja, não permite valores negativos
    unsigned int t, c, vl;

    printf("Tabuada: ");
    scanf("%u", &t);

    //Zerando a tabuada
    vl = 0;

    //A Estrutura de Repetoção - Enquanto
    while(vl <= 10){

        //Processamento de Dados
        c = t * vl;

        //Mostrar os dados na tela, aqui somente o valor da variável t
        printf("%u", t);

        //Mostrar os dados na twla, aqui mostra o texto X mais o valor da variável vl
        printf(" x %u", vl);

        //Mostrar os dados na tela, aqui mostra o texto = mais o valor da variável c e quebra a linha
        printf(" = %u\n", c);

        //Incrementado a variável vl.
        //Ao invés de usar assim vl - vl +1;
        //Coloca-se o pós incremento
        vl++;
    }
    //Segura o programa no ar
    getch();
}
