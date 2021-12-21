#include <stdio.h>

float calcularF(float);
float calcularK(float);

int main()
{
    float c;
    printf("Entre com o valor de Celsius.\n");
    scanf("%f", &c);
    printf("Valor da temp em Fahrenheit é %.2f e o valor da temp em Kelvin é %.2f\n", calcularF(c), calcularK(c));
    return 0;
}

float calcularF(float c)
{
        return (9 * c + 160)/5;
}

float calcularK(float c)
{
        return c + 273;
}

