#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

float n1,n2,media;

printf("Digite a primeira nota: ");
scanf("%f",&n1);
printf("Digite a segunda nota: ");
scanf("%f",&n2);

media = (n1 + n2) / 2;

printf("%s  A sua m�dia final foi %.2f",(media >=7)?"PARABENS!":"ESTUDE MAIS!",media);


}
