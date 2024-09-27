//Por referência

#include <stdio.h>
#include <locale.h>


int numeroDigitado(int *numero)
{
    *numero = *numero + 10;
    return *numero;
}

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int n = 10;
    printf("Número da Função: %i\n", numeroDigitado(&n));
    printf("Número do Método: %i", n);
    getch();
}
