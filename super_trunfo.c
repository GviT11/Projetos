#include <stdio.h>

int main () {

    char estado;
    char cidade [20];
    int pop, pt, codcarta; //pop = população, pt = ponto turistico, codcarta = codigo da carta//
    float area, pib;

    printf ("Entre com os valores da Carta 1\n");
printf ("Digite a letra representada pelo estado: \n");
scanf ("%c", &estado);

printf ("Digite o codigo da carta: \n ");
scanf ("%i", &codcarta);

printf ("Digite o nome da cidade: \n");
scanf ("%s", &cidade);

printf ("Digite o numero de habitantes da cidade: \n");
scanf ("%i", &pop);

printf ("Digite a area da cidade em KM²: \n");
scanf ("%f", &area);

printf ("Digite o PIB dessa cidade: \n");
scanf ("%f", &pib);

printf ("Digite o numero de pontos turisticos dessa cidade: \n");
scanf ("%i", &pt);

printf ("Carta 1\n");
printf ("Estado: %c\n", estado);
printf ("Codigo: %c%i\n", estado, codcarta);
printf ("Cidade: %s\n", cidade);
printf ("População: %i\n", pop);
printf ("Area: %f KM²\n", area);
printf ("PIB: %f\n", pib);
printf ("Pontos Turisticos: %i\n", pt);

return 0;

}
