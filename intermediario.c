#include <stdio.h>

int main() {

    char nom[20];
    int pop, pib, pt;
    float dens, area, percap;

    printf("Nome da sua cidade: ");
    scanf("%s", &nom);
    printf("População da sua cidade: ");
    scanf("%i", &pop);
    printf("Área da sua cidade: ");
    scanf("%f", &area);
    printf("Produto interno bruto da sua cidade: ");
    scanf("%f", &pib);
    printf("Números de pontos turisticos da sua cidade: ");
    scanf("%i", &pt);

    dens = (float) pop / area;
    percap = (float) pib / pop;

    printf("Carta-1:%s", nom, "População:%i", pop, "Área:%f", area, "PIB: %i", pib, "Pontos turisticos:%i", pt, "Densidade da população:%f", dens, "PIB Per Capta:%f", percap);
    
    return 0;
}
