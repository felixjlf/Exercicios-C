//Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos caracteres ela possui

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char string[30];
    int i, tamanho = 0;

    printf("Digite uma palavra qualquer: ");
    scanf("%[^\n]s%*c",string);

    for(i = 0;string[i] != '\0';i++)
    {
        tamanho++;
    }
    printf("\nA palavra possui %i caracteres.\n\n", tamanho);

    return 0;
}