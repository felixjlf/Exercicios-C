//Programa que resolve uma equação de 2º grau

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float a, b, c, x1, x2, delta;

    while (1)
    {
        printf("\nDigite o coeficiente a: ");
        scanf("%f%*c", &a); //Utilizando o operador de supressão * para evitar buffer de teclado

        if (a != 0) break;
        printf("O coeficiente a nao pode ser 0.");
        printf("\n\nContinuar...");
        getchar();
    }
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;
    printf("Delta = %f\n", delta);

    if (delta < 0)
    {
        printf("\nNao ha raizes reais.\n\n");
    }
    else if (delta == 0)
    {
        x1 = (-b + sqrt(delta));
        printf("\nx = %.2f\n\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nx\' = %.2f", x1);
        printf("\nx\'\' = %.2f", x2);
    }
    return 0;
}