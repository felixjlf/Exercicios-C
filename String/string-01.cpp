//Programa que lê e imprime uma string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char string[100];

    printf("Digite uma palavra ou frase qualquer: ");
    scanf("%[^\n]s%*c",string);
    //fgets(string, 100, stdin);
    //fputs(string, stdout);

    printf("\nVoce digiou: %s.\n\n", string);

    return 0;
}