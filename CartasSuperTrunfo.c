#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
   
    char estado1;
    char estado2;
    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float pib1, pib2;
    char codigo1[3];
    char cidade1[50];
    char codigo2[3];
    char cidade2[50];
    float densidadePopulacional1, densidadePopulacional2;
    float pibCapita1, pibCapita2;

    // incrementação de duas novas variaveis (densidade populacional e pib per capita)
    
    // Cadastro das Cartas:
    //função scanf para armazenar os dandos
    
    printf("Bem vindo(a) ao jogo super trufo! \n");
    printf("vamos cadastrar sua carta: \n");


    printf("Digite um estado (A a H): \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (Ex: 01): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o numero de habitantes:\n");
    scanf("%d", &populacao1);

    printf("Digite a area(KM²): \n");
    scanf("%f",&area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("\nVamos cadastrar outra carta \n");

    printf("Digite um estado (A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (Ex: 01): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o numero de habitantes:\n");
    scanf("%d", &populacao2);

    printf("Digite a area(KM²): \n");
    scanf("%f",&area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional1 = (populacao1 / area1);
    pibCapita1 = (pib1 / populacao1);

    densidadePopulacional2 = (populacao2 / area2);
    pibCapita2 = (pib2 / populacao2);

    printf("\nCarta: 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fKM²\n", area1);
    printf("PIB: %.2f$\n", pib1);
    printf("Numero de Pontos Turístico: %d\n", pontosTuristicos1);
    printf("Desnsidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("Pib per Capita: %.2f\n", pibCapita1);

    printf("\nCarta: 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fKM²\n", area2);
    printf("PIB: %.2f$\n", pib2);
    printf("Numero de Pontos Turístico: %d\n", pontosTuristicos2);
    printf("Desnsidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("Pib per Capita: %.2f\n", pibCapita2);


    //função printf para exibir as informações das cartas


    return 0;
}
