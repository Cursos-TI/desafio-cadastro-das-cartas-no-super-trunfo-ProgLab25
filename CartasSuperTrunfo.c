#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {                                       
    printf("Desafio Super Trunfo - Países\n"); 
    printf("Tema 1 - Cadastro das Cartas\n");
    printf("Carta 1:\n");                        // Carta número 1

    char caractere1,caractere2 ;
    char codigo1[4],codigo2[4];          
    char nomeCidade1[50],nomeCidade2[50];
    int  habitantes1,habitantes2;
    float Area1,Area2 ;
    float PBI1,PBI2 ;
    int Pontos_Turisticos1,Pontos_Turisticos2; 

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
    printf("PBI: %.2f Mil reais \n", PBI);
    int Pontos_Turisticos = 40;
    printf("Pontos Turisticos:%d \n",Pontos_Turisticos);
  
    printf("\n");
                                   
    printf("Carta 2:\n");                   // Carta número 2
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
    printf("PBI:%.2f Milhões de reais \n",PBI2);
    int Pontos_Turisticos2 = 15;
    printf("Pontos turisticos:%d \n",Pontos_Turisticos2);
    printf("\n");

    
    printf("Carta 1: \n");   
    printf("Digite a letra do Estado:");
    scanf("%c", &caractere1);
    
    char Estado ='A';
    printf("Estado: %c \n",Estado); 

    printf("Digite o Codigo:");
    scanf("%s",&codigo1);

    char Codigo3[] ="A01";
    printf("Codigo: %s\n",Codigo3);
   
    printf("Digite o nome da Cidade:");
    scanf("%s",&nomeCidade1);

    char NomeCidade [50] =( "Manaus") ; 
    printf("Nome da Cidade: %s \n",NomeCidade); 

    printf("Digite a Populacao:");
    scanf("%d",&habitantes1);
    
    int Populacao3 = 2063689; 
    printf("Populacao: %d \n",Populacao3);

    printf("Digite a Area:");
    scanf("%f",&Area1);

    float Area3 = 11401;
    printf("Area: %.2f km2 \n ",Area3);

    printf("Digite o PBI:");
    scanf("%.2f Mil reais",&PBI1);
    
    float PBI3 = 103281; 
    printf("PBI: %.2f Mil reais",PBI);

    printf("Digite o Numero de Pontos Turisticos:");
    scanf("%d",&Pontos_Turisticos1);

    int Numero_de_Pontos_Turisticos = 40;  
    printf("Numpero de Pontos Turisticos: %d \n",Numero_de_Pontos_Turisticos); 
    printf("\n"); 

    printf("Carta 2: \n");
    printf("Digite a letra do Estado:");
    scanf("%c",&caractere2);
    printf("Estado: %c \n",caractere2);
    char Estado4 ='B';
    printf("Estado: %c \n",Estado); 
  
    printf("Digite o Codigo:");
    scanf("%s",&codigo2);
    printf("Codigo: %s \n",codigo2);
    char Codigo4[] ="B02";
    printf("Codigo: %s\n",Codigo4);

    printf("Digite o nome da Cidade:");
    scanf("%s",&nomeCidade2);
    printf("Nome da Cidade: %s \n",nomeCidade2);
    char NomeCidade4 [50] =( "Belem") ; 
    printf("Nome da Cidade: %s \n",NomeCidade4); 

    printf("Digite a Populacao:");
    scanf("%d",&habitantes2);
    printf("Populacao: %d \n",habitantes2);
    int Populacao4 = 1398531; 
    printf("Populacao: %d \n",Populacao4);

    printf("Digite a Area:");
    scanf("%.2f km2",&Area2);
    printf("Area: %.2f km2 \n",Area2);
    float Area4 =1059 ;
    printf("Area: %.2f km2 \n ",Area4);
    
    printf("Digite o PBI:");
    scanf("%.2f Milhões de reais",&PBI2);
    printf("PBI: %.2f Milhões de reais \n",PBI2);
    float PBI4 = 33467126; 
    printf("PBI: %.2f Milhões de reais \n",PBI4);

    printf("Digite o Numero de Pontos Turisticos:");
    scanf("%d",&Pontos_Turisticos2);
    printf("Numero de Pontos Turisticos: %d \n",Pontos_Turisticos2);
    int Numero_de_Pontos_Turisticos4 = 15;  
    printf("Numpero de Pontos Turisticos: %d \n",Numero_de_Pontos_Turisticos4); 
    printf("\n");

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
