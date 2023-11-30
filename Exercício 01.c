/*
Exercício 1: 
Crie um algoritmo que leia o nome, a idade, o peso e a altura de 5 pessoas, armazenando em vetores.

- Mostre as informações solicitadas de cada pessoa e informe:
A maior altura e a menor altura.
O maior peso e menor peso;
A maior idade e a menor idade.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    char nomes [5][400];
    int idade [5];
    float peso [5];
    float altura [5];
    float baixo = 9999999;
    float alto = 0;
    int velho = 0;
    int novo = 9999999;
    float gordo = 0;
    float magro = 9999999;
    int pessoamaisbaixa = 0;
    int pessoamaisalta = 0;
    int pessoamaisvelha = 0;
    int pessoamaisnova = 0;
    int pessoagorda = 0;
    int pessoamagra = 0;

    //Solicitanto os dados do usuário
    
    for ( i = 0; i < 5; i++ )
    {
        printf("\nDigite o seu nome: ");
        gets(nomes[i]);

        printf("Digite a sua idade: ");
        scanf("%d", &idade[i]);

        printf("Digite o seu peso: ");
        scanf("%f", &peso[i]);

        printf("Digite a sua altura: ");
        scanf("%f", &altura[i]);

        fflush(stdin);

        //Processo
        if ( idade[i] > velho )
        {
            velho = idade[i];
            pessoamaisvelha = i;
        }
        if ( idade[i] < novo )
        {
            novo = idade[i];
            pessoamaisnova = i;
        }

        if (peso[i] > gordo)
        {
            gordo = peso[i];
            pessoagorda = i;
        }
        if (peso [i] < magro)
        {
            magro = peso[i];
            pessoamagra = i;
        }

        if (altura[i] > alto)
        {
            alto = altura[i];
            pessoamaisalta = i;
        }
        if (altura [i] < baixo)
        {
            baixo = altura [i];
            pessoamaisbaixa = i;
        }
    }

    system("cls || clear");

    printf("\nResultados:\n");
    printf("\n");
    printf("Pessoa com a maior altura: %s \n", nomes[pessoamaisalta]);
    printf("Altura: %.2f\n", alto);
    printf("\n");
    printf("Pessoa com a menor altura: %s \n", nomes[pessoamaisbaixa]);
    printf("Altura: %.2f\n", baixo);
    printf("\n");
    printf("Pessoa com o maior peso: %s \n", nomes[pessoagorda]);
    printf("Peso: %.2f\n", gordo);
    printf("\n");
    printf("Pessoa com o menor peso: %s \n", nomes[pessoamagra]);
    printf("Peso: %.2f\n",magro);
    printf("\n");
    printf("Pessoa mais velha: %s \n", nomes[pessoamaisvelha]);
    printf("Idade: %d\n", velho);
    printf("\n");
    printf("Pessoa mais nova: %s \n", nomes[pessoamaisnova]);
    printf("Idade: %d\n",novo);

    return 0;
}