//Sequência de Fibonacci

#include <stdio.h>
#include<locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    unsigned int i, vl, t1, t2, next;

    i = 1;
    vl = 20;
    t1 = 0;
    t2 = 1;

    printf("Sequência de Fibonacci até %u termos:\n", vl);

    for (i = 1; i <= vl; ++i) {
        printf("%u, ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    getch();
}
