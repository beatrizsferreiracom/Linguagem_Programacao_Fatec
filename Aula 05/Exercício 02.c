//Parâmetro

#include <stdio.h>
#include <locale.h>


int main (void){

    setlocale(LC_ALL, "Portuguese");

    float calcularAreaRetang(float x, float y);
    float area = calcularAreaRetang(10.0, 20.0);
    printf("A área é: %2.f", area);
    return 0;
}

float calcularAreaRetang(float base, float altura){

    float retang = base * altura;

    return retang;
}
