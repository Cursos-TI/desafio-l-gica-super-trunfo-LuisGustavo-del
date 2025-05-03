#include <stdio.h>

     //Desafio Super Trunfo - Países
int main() {
  
   int carta1, carta2;
   int turisticos1, turisticos2;
   int população1, população2;
   int opcaomenu;
   float area1, area2;
   float pib1, pib2; 
   char nomedojogador[80];
   char codigo1[50], codigo2[50];
   char cidade1[50], cidade2[50];
   char estado1[30], estado2[30];

     //Tema 1 - Cadastro da Carta 1
  printf("Seja Bem Vindo ao Super Trunfo! \n");
  printf("Carta 1\n");
  printf("Digite seu nome: \n");
  scanf("%s", &nomedojogador);
  printf("Seja Bem Vindo, %s!\n", nomedojogador);
  printf("Digite Seu Código: \n", codigo1);
  scanf("%s", &codigo1);
  printf("Digite Sua Cidade: \n", cidade1);
  scanf("%s", &cidade1);
  printf("Digite Seu Estado: \n", estado1);
  scanf("%s", &estado1);
  printf("Digite Número De Ponto Turistico: \n", turisticos1);
  scanf("%d", &turisticos1);
  printf("Digite Número De População: \n", população1);
  scanf("%d", &população1);
  printf("Digite Número De Area:  \n", area1);
  scanf("%f", &area1);
  printf("Digite Número De PIB:  \n", pib1);
  scanf("%f", &pib1);
   
     //Pular Linha para o Cadastro da carta 2
   printf("\n");

     //Tema 2 - Cadastro da Carta 2
  printf("** Vamos cadastrar a segunda carta , %s :) \n",nomedojogador);
  printf("Carta 2\n");
  printf("Digite Seu Código: \n", codigo2);
  scanf("%s", &codigo2);
  printf("Digite Sua Cidade: \n", cidade2);
  scanf("%s", &cidade2);
  printf("Digite Seu Estado: \n", estado2);
  scanf("%s", &estado2);
  printf("Digite Número De Ponto Turistico: \n", turisticos2);
  scanf("%d", &turisticos2);
  printf("Digite Número De População: \n", população2);
  scanf("%d", &população2);
  printf("Digite Número De Area: \n", area2);
  scanf("%f", &area2);
  printf("Digite Número De PIB:  \n", pib2);
  scanf("%f", &pib2);
   
     //Tema 3 - Adicionar Densidade Populacional é PIB Per Capita
     //Calcular a Densidade Populacional e Calcular o PIB per Capital
  float densidade1, densidade2;
  float pibcapital1, pibcapital2;
 
   densidade1= (float)(população1 / area1);
   densidade2= (float)(população2 / area2);
   pibcapital1= (float)(pib1 / população1);
   pibcapital2= (float)(pib1 / população2);

     //Tema 4 - Calcular Super Poder
  float superpoder1;
  float superpoder2;
  float inversodensidade1;
  float inversodensidade2;

   inversodensidade1 = 1/densidade1;
   inversodensidade2 = 1/densidade2;

   superpoder1 = ((float)população1 + area1 + pib1 + turisticos1 + pibcapital1 + inversodensidade1);
   superpoder2 = ((float)população2 + area2 + pib2 + turisticos2 + pibcapital2 + inversodensidade2);
    
     //Tema 5 - Exibindo o Resultado Final das cartas
     //Escrevendo os dados da Primeira carta 
     //Pular Linha para os dados da primeira carta

  printf("\n\n");
  printf("Carta 1\n");
  printf("Código: %s \n", codigo1);
  printf("Cidade: %s \n", cidade1);
  printf("Estado: %s \n", estado1);
  printf("Turistico: %d \n", turisticos1);
  printf("População: %d \n", população1);
  printf("Area: %.2f km² \n", area1);
  printf("PIB: %f Bilhões de reais\n", pib1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB Per Capital: %f reais\n", pibcapital1);
   
     //Pular Linha para os dados da segunda carta
   printf("\n\n");

     // Escrevendo os dados da segunda carta 
  printf("Carta 2\n");
  printf("Código: %s \n", codigo2);
  printf("Cidade: %s \n", cidade2);
  printf("Estado: %s \n", estado2);
  printf("Turistico: %d \n", turisticos2);
  printf("População: %d \n", população2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %f Bilhões de reais\n", pib2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB Per Capital: %f reais\n", pibcapital2);
    
     //Tema 6 -Exibir os Resultados das Comparações das Cartas
     //Resultado 1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence
     //Pular Linha para os dados das Comparações Cartas
  printf("\n\n");

  printf("Comparação das Cartas\n");
  printf("População:%d\n", população1 > população2);
  printf("Área:%d\n", area1 > area2);
  printf("PIB:%d\n", pib1 > pib2);
  printf("Pontos Turísticos:%d\n", turisticos1 > turisticos2);
  printf("Densidade Populacional: %d\n", densidade1 > densidade2);
  printf("PIB per Capita: %d\n", pibcapital1 > pibcapital2);
  printf("Super Poder: %d\n", superpoder1 > superpoder2);

  printf("\n");

  printf("## MENU INTERATIVO DE COMPARAÇÃO ##\n");
  printf("Escolha o atributo que deseja comparar: \n");
  printf("1 - População \n");
  printf("2 - Área \n");
  printf("3 - PIB \n");
  printf("4 - Número de Pontos Turísticos \n");
  printf("5 - Densidade Populacional \n");
  printf(" Digite a opção desejada:\n");

  scanf("%d", &opcaomenu);
  if (opcaomenu ==1){
    if (população1 > população2){
        printf(" O pais %s GANHOU, pois tem a população de %d e é maior que a população de %s, que tem %d de população ",cidade1,população1,cidade2,população2);
    }else if (população1 < população2){
        printf(" O pais %s GANHOU, pois tem a população de %d e é maior que a população de %s, que tem %d de população ",cidade2,população2,cidade1,população1);
    }else{
        printf(" Os dois países tem a mesma população de %d ", população1);
    }
}else if (opcaomenu ==2){
    if (area1 > area2){
        printf(" O pais %s GANHOU, pois tem a área de %.2f e é maior que a área de %s, que tem %.2f de área ",cidade1,area1,cidade2,area2);
    }else if (area1 < area2){
        printf(" O pais %s GANHOU, pois tem a área de %.2f e é maior que a área de %s, que tem %.2f de área ",cidade2,area2,cidade1,area1);
    }else{
        printf(" Os dois países tem a mesma área de %.2f ", area1);
    }
}else if (opcaomenu ==3){
    if (pib1 > pib2){
        printf(" O pais %s GANHOU, pois tem o PIB de %.2f e é maior que o PIB de %s, que tem %.2f de PIB ",cidade1,pib1,cidade2,pib2);
    }else if (pib1 < pib2){
        printf(" O pais %s GANHOU, pois tem o PIB de %.2f e é maior que o PIB de %s, que tem %.2f de PIB ",cidade2,pib2,cidade1,pib1);
    }else{
        printf(" Os dois países tem o mesmo PIB de %.2f ", pib1);
    }
}else if (opcaomenu ==4){
    if (turisticos1 > turisticos2){
        printf(" O pais %s GANHOU, pois tem o número de pontos turísticos de %d e é maior que o número de pontos turísticos de %s, que tem %d de pontos turísticos ",cidade1,turisticos1,cidade2,turisticos2);
    }else if (turisticos1 < turisticos2){
        printf(" O pais %s GANHOU, pois tem o número de pontos turísticos de %d e é maior que o número de pontos turísticos de %s, que tem %d de pontos turísticos ",cidade2,turisticos2,cidade1,turisticos1);
    }else{
        printf(" Os dois países tem o mesmo número de pontos turísticos de %d ", turisticos1);
    }
}else if (opcaomenu ==5){
    if (densidade1 < densidade2){
        printf(" O pais %s GANHOU, pois tem a densidade populacional de %.2f e é menor que a densidade populacional de %s, que tem %.2f de densidade populacional ",cidade1,densidade1,cidade2,densidade2);
    }else if (densidade1 > densidade2){
        printf(" O pais %s GANHOU, pois tem a densidade populacional de %.2f e é menor que a densidade populacional de %s, que tem %.2f de densidade populacional ",cidade2,densidade2,cidade1,densidade1);
    }else{
        printf(" Os dois países tem a mesma densidade populacional de %.2f ", densidade1);
    }
}else{
    printf(" Opção inválida! \n");
    printf(" Você digitou a opção %d, mas as opções válidas são de 1 a 5. \n", opcaomenu);
    printf(" Por favor, digite uma opção válida. \n");
    printf(" Obrigado por usar o nosso programa! \n");
    printf(" Até logo, %s! \n", nomedojogador);
         
   


    return 0;
}
}








