#include <stdio.h>
#include <locale.h>
//
void main () {

setlocale(LC_ALL,"Portuguese");

// DECLARANDO AS VARIAVEIS.

float  A, B,media;

// ENTRADA DAS NOTAS.

printf("INFORME SUA PRIMEIRA NOTA: ");
scanf("%f",&A);
printf("INFORME SUA SEGUNDA NOTA: ");
scanf("%f",&B);

// CALCULANDO A MÉDIA PONDERADA DO ALUNO.

media = (A*3.5 + B*7.5) /11.0;

// SAÍDA DAS NOTAS DO ALUNO.

printf("MEDIA =  %.5f", media);





}
