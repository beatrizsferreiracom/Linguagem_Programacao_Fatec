//3) Em uma eleição presidencial, existem quatro candidatos. Os votos são informados através de código. Os códigos utilizados são:

//1,2,3,4 votos para os respectivos candidatos;
//5 voto nulo;
//6 voto em branco.
//Sabendo que terá um total de 100 votos, escreva um algoritmo que calcule e imprima:

//Total de votos para cada candidato;
//Total de votos nulos;
//Total de votos em branco;
//Porcentagem de votos nulos sobre o total de votos;
//Porcentagem de votos em branco sobre o total de votos.
//Quem é candidato vencedor.


#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    // Variáveis para armazenar os votos
    int votosCandidato1 = 0;
    int votosCandidato2 = 0;
    int votosCandidato3 = 0;
    int votosCandidato4 = 0;
    int votosNulos = 0;
    int votosBrancos = 0;
    int voto;

    // Total de votos
    int totalVotos = 100;

    // Leitura dos votos
    for (int i = 0; i < totalVotos; i++) {
        printf("Digite o voto (1-4 para candidatos, 5 para nulo, 6 para branco): ");
        scanf("%d", &voto);

        // Contabilizando os votos
        switch(voto) {
            case 1: votosCandidato1++; break;
            case 2: votosCandidato2++; break;
            case 3: votosCandidato3++; break;
            case 4: votosCandidato4++; break;
            case 5: votosNulos++; break;
            case 6: votosBrancos++; break;
            default: printf("Voto inválido!\n"); break;
        }
    }

    // Calculando porcentagens
    float percNulos = (votosNulos * 100.0) / totalVotos;
    float percBrancos = (votosBrancos * 100.0) / totalVotos;

    // Exibindo resultados
    printf("\nResultado da votação:\n");
    printf("Candidato 1: %d votos\n", votosCandidato1);
    printf("Candidato 2: %d votos\n", votosCandidato2);
    printf("Candidato 3: %d votos\n", votosCandidato3);
    printf("Candidato 4: %d votos\n", votosCandidato4);
    printf("Votos nulos: %d (%.2f%%)\n", votosNulos, percNulos);
    printf("Votos em branco: %d (%.2f%%)\n", votosBrancos, percBrancos);

    // Determinando o vencedor
    int vencedor = 1;
    int maxVotos = votosCandidato1;

    if (votosCandidato2 > maxVotos) {
        maxVotos = votosCandidato2;
        vencedor = 2;
    }
    if (votosCandidato3 > maxVotos) {
        maxVotos = votosCandidato3;
        vencedor = 3;
    }
    if (votosCandidato4 > maxVotos) {
        maxVotos = votosCandidato4;
        vencedor = 4;
    }

    printf("O candidato vencedor é o candidato %d com %d votos.\n", vencedor, maxVotos);

    return 0;
}
