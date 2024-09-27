//Média

// As bibliotecas declaradas
#include<stdio.h>
#include<conio.h>
#include<locale.h>

main()
{
    //Definir linguagem dos caracteres
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int n1, n2, n3;
    float media;

    //Entrada de Dados
    printf("Digite a primeira nota:\n");
    scanf("%i", &n1);
    printf("Digite a segunda nota:\n");
    scanf("%i", &n2);
    printf("Digite a terceira nota:\n");
    scanf("%i", &n3);

    //Operação matemática - Processamento
    media=(n1+n2+n3)/3;

    //Saída de Dados
     printf("A média das notas é:%.2f \n",media);

     //Estrutura Condicional
     if (media>=7){
        printf("Aprovado");
     }
     else if(media>=5){
        printf("Recuperação");
     }
     else {
        printf("Reprovado");
     }
     getch();
     return 0;
}
