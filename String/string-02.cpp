//Programa que lê uma string e imprime as quatro primeiras letras

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char string[30];
    int i;

    printf("Digite uma palavra qualquer: ");
    scanf("%s", string);

    printf("\nQuatro primeiras letras: ");

    for(i = 0;i < 4;i++)
    {
        printf("%c ", string[i]);
    }
    printf("\n\n");
    return 0;
}