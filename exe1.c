/*1. Faca um programa que receba dois numeros e mostre qual deles e o maior.*/
#include <stdio.h>
int main()
{

    float a, b;

    printf("Digite dois nros: ");
    scanf("%f %f", &a, &b);

    if (a > b)
    {
        printf("%f > %f", a, b);
    }
    if (a < b)
    {
        printf("%f > %f", b, a);
    }
    else
    {
        printf("Os nros sao iguais");
    }
}