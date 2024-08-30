#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Declarando as variaveis solicitadas no enunciado
    char nomeProduto[100];
    int quantidade;
    float precoUnitario, valorTotal;
    float valorTotalDia = 0;
    char continuar = 's';

    //Decoração
    printf("\t\t\t\t\t\tMercadinho da Lari\n");

    //Loop pra registrar as vendas de N produtos
    while(continuar == 's' || continuar == 'S')
    {


        printf("Nome do produto: ");
        fflush(stdin);
        gets(nomeProduto);

        printf("Quantidade vendida em unidades: ");
        scanf("%d", &quantidade);

        printf("Preco Unitario: "); //Caso o preço tenha casas decimais, utilizar ponto no lugar da virgula se não da problema
        scanf("%f", &precoUnitario);


        valorTotal = quantidade * precoUnitario; //Calculando o valor total do produto escolhido
        valorTotalDia = valorTotalDia + valorTotal; //Valor total do produto escolhido eh adicionado ao valor total do dia

        getchar();

        printf("Deseja registrar outro produto?(sim ou não): ");
        continuar = getchar(); //Serve pra pegar a resposta
        getchar();

    }

    printf("Valor total recebido do dia: R$%.2f", valorTotalDia);

    return 0;

}
