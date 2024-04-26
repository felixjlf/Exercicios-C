//Programa que mostre o tamanho em byte que cada tipo de dados ocupa na memória: char, int, float, double
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("\nSize of char: %i", sizeof(char));
    printf("\nSize of char: %i", sizeof(int));
    printf("\nSize of char: %i", sizeof(float));
    printf("\nSize of char: %i", sizeof(double));
    printf("\nSize of char: %i\n", sizeof(bool));
}