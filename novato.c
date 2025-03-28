#include <stdio.h>
int main() {
    char cidade[20];
    int populacao, turistico;
    float PIB, area;

    printf("Estado de Manaus");
    printf("Digite o nome da sua cidade (1): ");
    scanf("%s", &cidade);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turistico);

    printf("....Carta....\n");
    printf(" Nome: %s\n Polulação: %d\n Área: %.2f\n PIB: %.2f\n Pontos turisticos: %d", cidade, populacao, area, PIB, turistico);

    return 0;
}
