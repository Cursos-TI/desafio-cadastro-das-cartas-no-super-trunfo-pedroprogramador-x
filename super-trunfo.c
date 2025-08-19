#include <stdio.h>

int main() {
    char estado;
    char codigo [20];
    char cidade[40];
    int populaçao;
    float area;
    float pib;
    float pontos, turisticos;

printf("Digite a letra do seu estado: ");
scanf("%c", &estado);
printf("Seu estado é: %c\n", estado);

printf("Digite a sua cidade: ");
scanf("%s", cidade);
printf("Nome da cidade: %s\n", cidade);

printf("Digite o código da carta: ", estado);
scanf("%s", codigo);
printf("Código da carta: %s\n", codigo);

printf("Digite o numero da população: ");
scanf("%d", populaçao);
printf("População: %d", populaçao);




}