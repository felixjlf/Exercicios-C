//Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o endereço de uma pessoa. 
//Depois, escreva uma função que receba um inteiro positivo N e retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente,
//dessa estrutura. Solicite também que o usuário digite os dados desse vetor dentro da função. fgets(frase, 50, stdin);
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[20];
    int idade;
    char endereco[30];
} cadastro;

cadastro* criaCadastro(int qtd){
    int i;
    cadastro *cad = (cadastro *) malloc(qtd * sizeof(cadastro));

    if (cad == NULL){
        printf("\nErro ao alocar memoria.\n");
        exit(1);
    }
    for(i = 0;i < qtd;i++)
    {
        printf("\n---CADASTRO N. %i---", (i + 1));
        printf("\nDigite o nome: ");
        fflush(stdin);
        fgets(cad[i].nome, 20, stdin);
        printf("Digite a idade: ");
        scanf("%i", &cad[i].idade);
        printf("Digite o endereco: ");
        fflush(stdin);
        fgets(cad[i].endereco, 30, stdin);
    }
    return cad;
}

int main()
{
    cadastro *cad = NULL;
    int qtd, i;

    printf("\nInforme quantos cadastros deseja criar: ");
    scanf("%i", &qtd);

    cad = criaCadastro(qtd);

    printf("\n---MOSTRANDO CADASTROS---\n");

    for(i = 0;i < qtd;i++)
    {
        printf("\n---CADASTRO N. %i---", (i + 1));
        printf("\nNome: %s", cad[i].nome);
        printf("\nIdade: %i", cad[i].idade);
        printf("\nEnderecpo: %s\n", cad[i].endereco);
    }

    free(cad);

    return 0;
}
