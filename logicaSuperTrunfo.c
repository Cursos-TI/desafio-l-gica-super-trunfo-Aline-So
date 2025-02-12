#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char nomedacidade1, nomedacidade2;
    float populacaocidade1, populacaocidade2, areacidade1,areacidade2, PIBcidade1, PIBcidade2;
    int PontosTuristicoscidade1, PontosTuristicoscidade2;
    char CidadeVencedora;


    printf("Entre com o nome da primeira cidade:. \n");
    scanf("%s", &nomedacidade1);
    
    printf("Entre com o nome da segunda cidade:. \n");
    scanf("%s", &nomedacidade2);
    
    printf("Entre com a população da primeira cidade:. \n");
    scanf("%f", &populacaocidade1);
    
    printf("Entre com a população da segunda cidade:. \n");
    scanf("%f", &populacaocidade2);
    
    printf("Entre com a area da primeira cidade:. \n");
    scanf("%f", &areacidade1);
    
    printf("Entre com a area da segunda cidade:. \n");
    scanf("%f", &areacidade2);

    printf("Entre com o PIB da primeira cidade:. \n");
    scanf("%f", &PIBcidade1);

    printf("Entre com o PIB da segunda cidade:. \n");
    scanf("%f", &PIBcidade2);
    
    printf("Entre com os Pontos Turísticos da primeira cidade:. \n");
    scanf("%d", &PontosTuristicoscidade1);

    printf("Entre com os Pontos Turísticos da segunda cidade:. \n");
    scanf("%d", &PontosTuristicoscidade2);
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

 if(nomedacidade1 >= 30){
    printf("O nome da primeira é menor que o da segunda cidade:. \n");
 } else{
    printf("O nome da primeira esta dentro esperado:. \n");
 }

 if(populacaocidade1 > 10000 ){
    printf("População da primeira cidade é menor que a população da segunda cidade:. \n");
 } else {
    printf("População da primeira cidade está dentro do esperado:. \n");
 }

 if(areacidade1 > 500){
    printf("A Área menor da primeira cidade é menor que a da segunda cidade:. \n");
 } else {
    printf("A Área da primeira cidade está dentro do esperado:. \n");
 }
 
  if(PIBcidade1 >= 1500){
    printf("O PIB da primeira cidade é menor que o da segunda cidade:. \n");
  } else {
    printf("O PIB da primeira cidade dentro do esperado:. \n");
  }

 if(PontosTuristicoscidade1 < 125){
    printf("Os Pontos Turísticos da primeira cidade é menor que o segunda cidade:. \n");
 } else {
    printf("Pontos Turítisticos da primeira cidade estão dentro do esperado:. \n");
 }
    
    if(PontosTuristicoscidade1 < PontosTuristicoscidade2){
        printf("A primeira cidade tem menos pontos turísticos que a segunda cidade:. \n");
    } else {
        printf("A sengunda cidade tem mais pontos turísticos que a primeira:. \n");
    }
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

       printf("A cidade vencedora com maior Pontos Turísticos é: %s\n", &CidadeVencedora);


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
