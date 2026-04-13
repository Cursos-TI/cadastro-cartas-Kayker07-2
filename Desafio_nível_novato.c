//Criando cartas do super trunfo

#include <stdio.h>
int main() {
    char estado; 
    char estado2;
    char codigo[50], codigo2[50], nome_da_cidade[50], cidade2[50];   
    int população, população2, pontos_turisticos, turisticos2;
    float área, área2, PIB, PIB2;

    //Carta1
    printf("Carta 1\n");
    printf("Digite o estado da carta de 'A' a 'H': \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite a área em km²: \n");
    scanf("%f", &área);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    
    //Carta2
    printf("\n\nCarta2\n");
    printf("Digite o estado da carta de 'A' a 'H': \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &população2);

    printf("Digite a área em km²: \n");
    scanf("%f", &área2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos2);



    //Sáida dos dados
    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado);   
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", população);
    printf("Área: %.2fKm²\n", área);
    printf("PIB:R$ %.2f bilhões\n", PIB);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);


    printf("\n\nCarta 2:\n");
    printf("Estado: %c\n", estado2);   
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2fKm²\n", área2);
    printf("PIB:R$ %.2f bilhões\n", PIB2);
    printf("Número de pontos turísticos: %d\n", turisticos2);

    return 0;

}