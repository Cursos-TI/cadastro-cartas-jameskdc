#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  char estado;
  char codigodacarta[3];
  char nomedacidade[30];
  int populacao;
  float areaemkm;
  float pib;
  int numerodepontosturisticos;

  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  printf("Carta 1\n");
  printf("Estado: A\n", estado);
  printf("Código: A01\n", codigodacarta);
  printf("Nome da Cidade: São Paulo\n", nomedacidade);
  printf("População: 458712564\n", populacao);
  printf("Área em KM²: 1021.65\n", areaemkm);
  printf("PIB: 699.28 Bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: 32\n", numerodepontosturisticos);

  // Pula Linha separa Cartas
  printf("\n");

  // Carta 2
  printf("Carta 2\n");
  printf("Estado: B\n", estado);
  printf("Código: B02\n", codigodacarta);
  printf("Nome da Cidade: Rio de Janeiro\n", nomedacidade);
  printf("População: 25468972\n", populacao);
  printf("Área em KM²: 2021.11\n", areaemkm);
  printf("PIB: 800.78 Bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: 56\n", numerodepontosturisticos);




  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 