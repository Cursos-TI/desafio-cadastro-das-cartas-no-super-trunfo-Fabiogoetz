#include <stdio.h>

int main (){
    int populacao;
    int turisticos;
    float area;
    float pib;
    char cidade [20];
    char codigo [20];

    printf("Desafio super trunfo. \n");

    printf("Insira as informações das cidades do estado A. \n");

    printf("Insira o código da cidade: \n");
    scanf("%s", &codigo);


    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade); 

    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Insira a área em km² da cidade: \n");
    scanf("%f", &area);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Insira o número de pontos túristicos da cidade:\n");
    scanf("%d", &turisticos);

    printf("Código da cidade: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População da cidade: %d \n", populacao);
    printf("Area da cidade: %f \n", area);
    printf("PIB da cidade: %f \n", pib);
    printf("Pontos turisticos: %d \n", turisticos);




    
    

    return 0;
}


