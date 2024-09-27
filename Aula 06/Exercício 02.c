//2) Escreva uma Programa que receba 10 números inteiros e imprima a quantidade de números primos 
//e não primos dentre os números que foram digitados. 

#include <stdio.h>
#include <locale.h>

int Primo(int num) {
    if (num <= 1) return 0; // Números menores ou iguais a 1 não são primos

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Não é primo
        }
    }
    return 1; // É primo
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, primos = 0, naoPrimos = 0;

    for (int j = 1; j <= 10; j++) {
        printf("Digite o %dº número: ", j);
        scanf("%d", &num);

        if (Primo(num)) {
            primos++;
        } else {
            naoPrimos++;
        }
    }

    printf("\nQuantidade de números primos: %d\n", primos);
    printf("Quantidade de números não primos: %d\n", naoPrimos);

    return 0;
}


