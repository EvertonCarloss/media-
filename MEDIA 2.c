#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

// CONFERINDO A NOTA E M�DIA DO ALUNO.
float n1, n2, media;
char nome [20];

printf("NOME DO ALUNO: ");
gets(nome);
printf("INFORME A PRIMEIRA NOTA DO ALUNO:  ");
scanf("%f",&n1);
printf("INFORME A SEGUNDA NOTA DO ALUNO:  ");
scanf("%f",&n2);

media = (n1 + n2) / 2;

printf("O ALUNO %s TIROU AS NOTAS %.2f E %.2f.\n",nome,n1,n2);
printf(" A M�DIA FINAL DO ALUNO FOI %.2f", media);


}
