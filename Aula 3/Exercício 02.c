//Uso de função string

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int x;
    char curso[100];

    printf("Nome do curso: \n");
    gets(curso);
    
    x = strcmpi(curso,"Análise e Desenvolvimento de Sistemas");
    printf("%i \n",x);

    if (strcmpi(curso,"Análise e Desenvolvimento de Sistemas")==0)
    {
    printf("Nome do curso invertido: %s",strrev(curso));
    }
    getch();
}
