//Cálculo média

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

float calcularMedia(float n1, float n2, float n3){
    float media = (n1 + n2 + n3)/3;
    return media;
}

int main() {

   setlocale(LC_ALL, "Portuguese");

   float n1, n2, n3;
   char nomeAluno [50];

   printf("Digite seu nome:\n");
   gets (nomeAluno);

   printf("Digite a primeira nota:\n");
   scanf("%f", &n1);
   printf("Digite a segunda nota:\n");
   scanf("%f", &n2);
   printf("Digite a terceira nota:\n");
   scanf("%f", &n3);

   float media = calcularMedia(n1, n2, n3);

   if (media >= 7) {
      printf("Nome digitado: %s\n", nomeAluno);
      printf("Aprovado! Média: %.2f\n", media);
   } else if (media >= 5 && media < 7) {
      printf("Nome digitado: %s\n", nomeAluno);
      printf("Recuperação! Média: %.2f\n", media);
   } else {
      printf("Nome digitado: %s\n", nomeAluno);
      printf("Reprovado! Média: %.2f\n", media);
   }

   getch();
   return 0;
}

