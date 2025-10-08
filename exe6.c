/*6. Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles,
assim como a diferenca existente entre ambos.*/
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
        printf("\nSem diferenca");
    }
}