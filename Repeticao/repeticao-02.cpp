//Imprimir N linhas do triângulo de Floyd

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int linhas, contLinhas, num = 1, i;

    printf("Quantas linhas do triangulo de Floyd deseja imprimir? ");
    scanf("%i", &linhas);

    putchar('\n');

    for(contLinhas = 1;contLinhas <= linhas;contLinhas++)
    {
        for(i = 1;i <= contLinhas;i++)
        {
            printf("%i ", num++);
        }
        putchar('\n');
    }
    return 0;
}