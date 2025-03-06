#include <stdio.h>

int main () {

    char estado, estado1;
    char cidade [20], cidade1 [20];
    int pop, pop1, pt, pt1, codcarta, codcarta1; //pop = população, pt = ponto turistico, codcarta = codigo da carta//
    float area, area1, pib, pib1;

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

    printf ("Entre com os valores da Carta 2\n");
printf ("Digite a letra representada pelo estado: \n");
scanf (" %c", &estado1);

printf ("Digite o codigo da carta: \n ");
scanf (" %i", &codcarta1);

printf ("Digite o nome da cidade: \n");
scanf (" %s", &cidade1);

printf ("Digite o numero de habitantes da cidade: \n");
scanf (" %i", &pop1);

printf ("Digite a area da cidade em KM²: \n");
scanf (" %f", &area1);

printf ("Digite o PIB dessa cidade: \n");
scanf (" %f", &pib1);

printf ("Digite o numero de pontos turisticos dessa cidade: \n");
scanf (" %i", &pt1);

    printf ("Carta 2\n");
    printf ("Estado: %c\n", estado1);
    printf ("Codigo: %c%i\n", estado1, codcarta1);
    printf ("Cidade: %s\n", cidade1);
    printf ("População: %i\n", pop1);
    printf ("Area: %f KM²\n", area1);
    printf ("PIB: %f\n", pib1);
    printf ("Pontos Turisticos: %i\n", pt1);

return 0;

}
