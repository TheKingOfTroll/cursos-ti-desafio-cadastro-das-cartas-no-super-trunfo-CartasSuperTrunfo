#include <stdio.h>
   
    int main(){
   
        //declarando as variaveis
      char estado1[20];
      char codigo1[4];
      char cidade1[20];
      char estado2[20];
      char codigo2[4];
      char cidade2[20];
      int populacao1, populacao2;
      int pontos_turisticos1, pontos_turisticos2;
      float area1, area2;
      float Pib1, Pib2;
      float densidade_populacional1;
      float Pib_percapita1;
      float densidade_populacional2;
      float Pib_percapita2;     
      
        printf(" -------- VAMOS DAR INICIO AO SUPER TRUNFO -------- \n\n");

        printf("** CADASTRO CARTA 1 **\n");

        //carta 1
printf("informe a letra do estado: \n");
  scanf ("%s", &estado1);
printf("informe o código da carta: \n");
  scanf ("%s", &codigo1);
printf("informe a cidade: \n");
  scanf("%s", &cidade1);      
printf("informe a população: \n");
  scanf("%i", &populacao1);
printf("informe a area: \n");
  scanf("%f", &area1); 
printf("informe o pib: \n");
  scanf("%f", &Pib1);
printf("informe a quantidade de pontos turisticos: \n");
  scanf("%d", &pontos_turisticos1) ;

  //calculo da densidade populacional e Pib percapita da carta 1
    densidade_populacional1 = (float) populacao1/area1;
    Pib_percapita1 = (float) Pib1/populacao1;

printf("\n\n");//identação para melhor visualização

    printf("** CADASTRO CARTA 2 **\n");

        //carta 2
printf("informe a letra do estado: \n");
  scanf ("%s", &estado2);
printf("informe o código da carta: \n");
  scanf ("%s", &codigo2);
printf("informe a cidade: \n");
  scanf("%s", &cidade2);
printf("informe a população: \n");
  scanf("%i", &populacao2);
printf("informe a area: \n");
  scanf("%f", &area2); 
printf("informe o pib: \n");
  scanf("%f", &Pib2);
printf("informe a quantidade de pontos turisticos: \n");
  scanf("%d", &pontos_turisticos2) ;

   //calculo da densidade populacional e Pib percapita da carta 2
    densidade_populacional2 = (float) populacao2/area2;
    Pib_percapita2 = (float) Pib2/populacao2;

          printf("\n \n");//identação para melhor visualização

          //exibição da carta 1
              printf ("--- CARTA 1 ---\n");     
       printf("o estado é: %s \n", estado1);       
       printf("o codigo é: %s \n", codigo1);
       printf("a cidade é: %s \n", cidade1);
       printf("a população é: %d \n", populacao1);
       printf("a area é: %.2f km²\n", area1);
       printf("o Pib é: %.2f bilhões de reais\n", Pib1);
       printf("numero de pontos turisticos: %d \n", pontos_turisticos1);
       printf("a densidade populacional é: %.2f hab/km² \n", densidade_populacional1);
       printf("PIB per capita: %.2f reais\n", Pib_percapita1);

       printf("\n \n ");//identação para melhor visualização
          
                    //exibição da carta 2
            printf ("--- CARTA 2 ---\n");     
            printf("o estado é: %s \n", estado2);              
            printf("o codigo é: %s \n", codigo2);      
            printf("a cidade é: %s \n", cidade2);       
            printf("a população é: %d \n", populacao2);       
            printf("a area é: %.2f km²\n", area2);      
            printf("o Pib é: %.2f bilhões de reais\n", Pib2);      
            printf("numero de pontos turisticos: %d \n", pontos_turisticos2);
            printf("a densidade populacional é: %.2f hab/km² \n", densidade_populacional2);
            printf("PIB per capita: %.2f reais\n", Pib_percapita2);


                //Calculando o Super Poder das duas cartas
                 float SuperPoder1 = (populacao1 + Pib1 + area1 + pontos_turisticos1 + Pib_percapita1 + (1/densidade_populacional1));
                 float SuperPoder2 = (populacao2 + Pib2 + area2 + pontos_turisticos2 + Pib_percapita2 + (1/densidade_populacional2));
                 
                 printf("---------------------------------------------------------\n\n");
                 //exibição dos resultado calculados
                 printf("*** o super poder da Carta 1 é: %.2f ***\n", SuperPoder1);
                 printf("*** o super poder da Carta 2 é: %.2f ***\n", SuperPoder2);

printf("\n\n\n"); //identação para melhor visualização


          // Comparação dos atributos Carta 1 vs Carta 2
      printf("---- comparacao de atributos ----\n");
printf ("populacao: %d\n", populacao1 > populacao2);
printf ("area: %d\n",area1 > area2);
printf ("pib: %d\n",Pib1 > Pib2);
printf ("pontos_turisticos: %d\n",pontos_turisticos1 > pontos_turisticos2);
printf ("Pib Percapita: %d\n", Pib_percapita1 > Pib_percapita2);
printf ("densidade opuacional: %d\n", 1/densidade_populacional1 > 1/densidade_populacional2);
printf ("super poder: %d\n", SuperPoder1 > SuperPoder2); 

printf("\n\n\n"); //identação para melhor visualização


//Declarando Atributos Vencedores
printf("--- Atributos Vencedores ---\n");
          if (populacao1 > populacao2)
            printf ("populacao: CARTA 1 VENCEU!!!\n");
          else
            printf ("populacao: CARTA 2 VENCEU!!!\n");

            if (area1 > area2)
            printf ("Area: CARTA 1 VENCEU!!!\n");
          else
            printf ("Area: CARTA 2 VENCEU!!!\n");

            if (Pib1 > Pib2)
            printf ("Pib: CARTA 1 VENCEU!!!\n");
          else
            printf ("Pib: CARTA 2 VENCEU!!!\n");

            if (pontos_turisticos1 > pontos_turisticos2)
            printf ("Pontos Turisticos: CARTA 1 VENCEU!!!\n");
          else
            printf ("Pontos Turisticos: CARTA 2 VENCEU!!!\n");

            if (Pib_percapita1 > Pib_percapita2)
            printf ("Pib Percapita: CARTA 1 VENCEU!!!\n");
          else
            printf ("Pib percapita: CARTA 2 VENCEU!!!\n");

            if (1/densidade_populacional1 > 1/densidade_populacional2)
            printf ("Densidade Populacional: CARTA 1 VENCEU!!!\n");
          else
            printf ("Densidade Populacional: CARTA 2 VENCEU!!!\n");

            if (SuperPoder1 > SuperPoder2)
            printf ("Super Poder: CARTA 1 VENCEU!!!\n");
          else
            printf ("Super Poder: CARTA 2 VENCEU!!!\n");
          
return 0;

}
 
