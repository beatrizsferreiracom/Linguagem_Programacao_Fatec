//Por valor

#include <stdio.h>
#include <locale.h>


int numeroDigitado(int numero)
{
    numero = numero + 10;
    return numero;
}

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int n = 10;
    printf("N�mero da Fun��o: %i\n", numeroDigitado(n));
    printf("N�mero do M�todo: %i", n);
    getch();
}
