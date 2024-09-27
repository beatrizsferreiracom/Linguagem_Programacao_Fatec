//1) Escreva um algoritmo que receba 10 de valores inteiros e positivos, imprima o maior e o menor valor do conjunto dos 10 números.

#include <stdio.h>
#include <locale.h>
#include <conio.h>
 
int main (void){
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    unsigned int maior, numero, menor;
 
    // Entrada de Dados do primeiro número
    printf("Digite um número: ");
    scanf("%u", &numero);

    // Inicializa maior e menor com o primeiro número
    maior = numero;
    menor = numero;
 
    // Estrutura de repetição
    for(int i = 1; i < 10; i++){
        
        printf("Digite um número: ");
        scanf("%u", &numero);

        if (numero > maior){
            maior = numero;
        }

        if (numero < menor){
            menor = numero;
        }
    }
 
    //Saída de Dados
    printf("Maior número: %u\n", maior);
    printf("Menor número: %u\n", menor);
 
    //Segura o programa no ar
    getch();
    return 0;
}
