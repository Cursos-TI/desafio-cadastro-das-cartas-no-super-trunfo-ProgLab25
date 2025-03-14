#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() { 
    printf("Desafio Super Trunfo - Países\n"); 
    printf("Tema 1 - Cadastro das Cartas\n");
    printf("Carta 1:\n");
   
    char Amazonas='A';
    printf("Amazonas:%c \n",Amazonas);
    char Codigo1[]="A01";
    printf("Codigo:%s \n",Codigo1);
    char Cidade[]="Manaus";
    printf("Cidade:%s \n",Cidade);
    int Populacao = 2063689;       
    printf ("Populacao:%d habitantes \n",Populacao); 
    float Area = 11401;
    printf("Area:%2.f km2\n",Area); 
    float PBI = 103281;
    printf("PBI: %.2f reais \n", PBI);
    int Pontos_Turisticos = 40;
    printf("Pontos Turisticos:%d \n",Pontos_Turisticos);

    printf("Carta 2:\n");
    char Para ='B';
    printf("Para:%c \n",Para);
    char Codigo2[]= "B02";
    printf ("Codigo:%s \n",Codigo2);
    char Cidade2[] ="Belem"; 
    printf("Cidade:%s \n", Cidade2);
    int Populacao2 = 1398531;  
    printf("Populacao:%d habitantes \n",Populacao2);
    float Area2 = 1059;
    printf("Area:%2.f km2 \n",Area2); 
    float PBI2 = 33467126;
    printf("PBI:%.2f reais \n",PBI2);
    int Pontos_Turisticos2 = 15;
    printf("Pontos turisticos:%d \n",Pontos_Turisticos2);
    // Sugestão: Defina Variáveis separadas para cada atributo das cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
