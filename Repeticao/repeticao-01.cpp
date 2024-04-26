//Programa que imprime o enésimo termo da sequência de Fibonacci

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, atual = 1, anterior = 0, proximo;

    printf("Digite quantos termo da sequencia de Fibonacci: ");
    scanf("%i", &n);

    for(int i = 1; i <= n;i++)
    {
        printf("%i ", atual);
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    printf("\n\n");

    return 0;
}