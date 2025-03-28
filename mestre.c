#include <stdio.h>

int main()
{
    printf("..............\n");
    printf("SUPER TRUNFO!!\n");
    printf("..............\n");
    printf("jogar(1)\n");

    char jogar;

    scanf("%i", &jogar);

    switch (jogar)
    {

    case 1:

        char nom[20];
        int pop, pt, resultado, poder;
        float area, pib, dpop, pibpc;

        printf("Nome da sua cidade A01: ");
        scanf("%s", &nom);
        printf("População da sua cidade A01: ");
        scanf("%i", &pop);
        printf("Área da sua cidade A01: ");
        scanf("%f", &area);
        printf("Produto interno bruto da sua cidade A01: ");
        scanf("%f", &pib);
        printf("Números de pontos turisticos da sua cidade A01: ");
        scanf("%i", &pt);
        printf(".................................\n");

        dpop = (float)pop / area;
        pibpc = (float)pib / pop;
        poder = pop + area + pib + pt - dpop + pibpc;

        char nom2[20];
        int pop2, pt2, poder2;
        float area2, pib2, pibpc2, dpop2;

        printf("Nome da sua cidade A02: ");
        scanf("%s", &nom2);
        printf("População da sua cidade A02: ");
        scanf("%i", &pop2);
        printf("Área da sua cidade A02: ");
        scanf("%f", &area2);
        printf("Produto interno bruto da sua cidade A02: ");
        scanf("%f", &pib2);
        printf("Números de pontos turisticos da sua cidade A02: ");
        scanf("%i", &pt2);
        printf(".................................\n");

        dpop2 = (float)pop2 / area2;
        pibpc2 = (float)pib2 / pop2;
        poder2 = pop2 + area2 + pib2 + pt2 - dpop2 + pibpc2;

        printf("!!CARTA A01!!\n");
        printf("Cidade: %s\n", nom);
        printf("População: %i\n", pop);
        printf("Área: %.2f\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Pontos Turísticos: %i\n", pt);
        printf("Densidade populacional: %.2f\n", dpop);
        printf("PIB Per Capita: %.2f\n", pibpc);
        printf("Poder da carta: %.2f\n", poder);
        printf(".................................\n");
        printf("!!CARTA A02!!\n");
        printf("Cidade: %s\n", nom2);
        printf("População: %i\n", pop2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turísticos: %i\n", pt2);
        printf("Densidade populacional: %.2f\n", dpop2);
        printf("PIB Per Capita: %.2f\n", pibpc2);
        printf("Poder da carta: %.2f\n", poder2);
        printf("................................\n");

        if (pop > pop2)
        {
            resultado++;
        }
        if (area > area2)
        {
            resultado++;
        }
        if (pib > pib2)
        {
            resultado++;
        }
        if (dpop < dpop2)
        {
            resultado++;
        }
        if (pibpc > pibpc2)
        {
            resultado++;
        }
        if (poder>poder2)
        {
            resultado++;
        }
        if (resultado > 0)
        {
            printf("Carta A01 %s vencedora!", nom);
        }
        else
        {
            printf("Carta A02 %s vencedora!", nom2);
        }
        break;

    default:

        printf("Opção inválida");
        break;
    }
    return 0;
}
