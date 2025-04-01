#include <stdio.h>

int main() {

char estado1, codigo1[4], cidade1[50];
float area1, pib1, denspop1, percap1, spoder1;
int ptur1;
unsigned long int populacao1;

char estado2, codigo2[4], cidade2[50];
float area2, pib2, denspop2, percap2, spoder2;
int ptur2;
unsigned long int populacao2;

printf("Digite a letra do estado de A a H: ");
scanf(" %c",&estado1);

printf("Digite o código da carta (letra + 01 a 04): ");
scanf("%s", codigo1);

getchar();
printf("Digite a cidade: ");
fgets(cidade1, sizeof(cidade1), stdin);

printf("Digite o número de habitantes: ");
scanf("%lu", &populacao1);

printf("Digite a área em quilômetros quadrados: ");
scanf("%f", &area1);

printf("Digite o PIB: ");
scanf("%f", &pib1);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &ptur1);

denspop1 = populacao1/area1;
percap1 = (pib1 * 1000000000)/populacao1;
spoder1 = (float)populacao1 + area1 + pib1 + ptur1 + percap1 + (1/denspop1);

printf("Digite a letra do estado de A a H: ");
scanf(" %c",&estado2);

printf("Digite código da carta (letra + 01 a 04): ");
scanf("%s", codigo2);

getchar();
printf("Digite a cidade: ");
fgets(cidade2, sizeof(cidade2), stdin);

printf("Digite o número de habitantes: ");
scanf("%lu", &populacao2);

printf("Digite a área em quilômetros quadrados: ");
scanf("%f", &area2);

printf("Digite o PIB: ");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &ptur2);

denspop2 = populacao2/area2;
percap2 = (pib2 * 1000000000)/populacao2;
spoder2 = (float)populacao2 + area2 + pib2 + ptur2 + percap2 + (1/denspop2);

printf("Carta1: \n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s", cidade1);
printf("População: %lu\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de pontos turísticos: %d\n", ptur1);
printf("Densidade populacional: %.2f hab/km²\n", denspop1);
printf("PIB per Capita: %.2f reais\n", percap1);
printf("Super Poder: %.2f\n", spoder1);

printf("Carta2: \n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s", cidade2);
printf("População: %lu\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de pontos turísticos: %d\n", ptur2);
printf("Densidade populacional: %.2f hab/km²\n", denspop2);
printf("PIB per Capita: %.2f reais\n", percap2);
printf("Super Poder: %.2f\n", spoder2);

printf("Resultados\n");
printf("População: Carta 1 venceu? (%d)\n", populacao1 > populacao2);
printf("Área: Carta 1 venceu? (%d)\n", area1 > area2);
printf("PIB: Carta 1 venceu? (%d)\n", pib1 > pib2);
printf("Pontos Turísticos: Carta 1 venceu? (%d)\n", ptur1 > ptur2);
printf("Densidade Populacional: Carta 2 venceu? (%d)\n", denspop1 < denspop2);
printf("PIB per Capita: Carta 1 venceu? (%d)\n", percap1 > percap2);
printf("Super Poder: Carta 1 venceu? (%d)\n", spoder1 > spoder2);

return 0;
}; 