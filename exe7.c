/*7. Faca um programa que receba dois numeros e mostre o maior. Se por acaso, os dois
numeros forem iguais, imprima a mensagem Numeros iguais.*/
#include <stdio.h>
int main()
{

    int a, b, diferenca;

    printf(" Digite dois nros: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d maior que %d\n", a, b);
        diferenca = a - b;
        printf("Diferenca entre eles: %d\n", diferenca);
    }
    if (a < b)
    {
        printf("%d maior que %d\n", b, a);
        diferenca = b - a;
        printf("Diferenca entre eles: %d\n", diferenca);
    }
    if (a == b)
    {
        printf("%d = %d", a, b);
        printf("\nNumeros iguais");
    }
}