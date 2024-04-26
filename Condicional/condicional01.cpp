//Faça um progrma que leia a altura e o peso de uma pessoa. Verifique e mostre qual a classificação dessa pessoa

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float altura, peso;
    char categoria;

    printf("\nDigite a altura: ");
    scanf("%f", &altura);

    printf("Digite o peso: ");
    scanf("%f", &peso);

    if (altura < 1.2)
    {
        categoria = peso < 60 ? 'A' : (peso <= 90 ? 'D' : 'G');
    }
    else if (altura < 1.7)
    {
        categoria = peso < 60 ? 'B' : (peso <= 90 ? 'E' : 'H');
    }
    else
    {
        categoria = peso < 60 ? 'C' : (peso <= 90 ? 'F' : 'I');
    }

    printf("\nCategoria: %c\n\n", categoria);

    return 0;
}