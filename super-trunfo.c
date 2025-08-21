#include <stdio.h>

int maian() {

// Variáveis para armazenar os dados da carta 1
char estado1;
char codigo1[4];
char cidade1[50];
int população1;
float area1, pib1;
int pontosturisticos1;

// Variáveis para armazenar os dados da carta 2
char estado2;
char codigo2[4];
char cidade2[50];
int população2;
float area2, pib2;
int pontosturisticos2;

// Entrada de dados da carta 1
printf("=== Cadastro da carta 1 ===\n");
printf("Digite o estado (A-H): ");
scanf("%c", &estado1);

printf("Digite o codigo da carta (ex;A01): ");
scanf("%s", codigo1);

printf("Digite o nome da cidade: ");
scanf("%[^\n]", cidade1);

printf("Digite a população: ");
scanf("%d", &população1);

printf("Digite a Area em  km²: ");
scanf("%f", &area1);

printf("Digite o PIB em bilhoes: ");
scanf("%f", &pib1);

printf("Digite o Numero de Pontos Turisticos: ");
scanf("%d", &pontosturisticos1);

// Entradas de dados da carta 2
printf("=== Cadastro da carta 2 ===\n");
printf("Digite o estado (A-H): ");
scanf("%c", &estado2);

printf("Digite o codigo da carta (ex;A01): ");
scanf("%s", codigo2);

printf("Digite o nome da cidade: ");
scanf("%[^\n]", cidade2);

printf("Digite a população: ");
scanf("%d", &população2);

printf("Digite a Area em  km²: ");
scanf("%f", &area2);

printf("Digite o PIB em bilhoes: ");
scanf("%f", &pib1);

printf("Digite o Numero de Pontos Turisticos: ");
scanf("%d", &pontosturisticos2);

// Exibindo dados cadastrados
printf("\n=== Carta 1 ===\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", população1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);

printf("\n=== Carta 2 ===\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", população2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);

return 0;
}