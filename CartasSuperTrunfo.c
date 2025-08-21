#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1;
    int populacao1;
    int pontosTuristicos1;
    float area1;
    float pib1;
    char codigo1[3];
    char cidade1[50];

    char estado2;
    int populacao2;
    int pontosTuristicos2;
    float area2;
    float pib2;
    char codigo2[3];
    char cidade2[50];
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
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
    scanf("%s", &codigo2);

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

    printf("\nCarta: 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.0fKM²\n", area1);
    printf("PIB: %.3f mil$\n", pib1);
    printf("Numero de Pontos Turístico: %d\n", pontosTuristicos1);

    printf("\nCarta: 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.0fKM²\n", area2);
    printf("PIB: %.3f $\n", pib2);
    printf("Numero de Pontos Turístico: %d\n", pontosTuristicos2);

    //função printf para exibir as informações das cartas

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
