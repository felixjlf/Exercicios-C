//Ler uma string e imprimir ao contrário

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char string[30];
    int i;

    printf("Digite uma palavra qualquer: ");
    scanf("%[^\n]s%*c",string);

    for(i = strlen(string) - 1;i >= 0;i--)
    {
        printf("%c", string[i]);
    }
    printf("\n\n");
    return 0;
}