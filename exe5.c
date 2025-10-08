/*5. Faca um programa que receba um numero inteiro e verifique se este numero e par ou ımpar.*/
#include <stdio.h>
int main()
{

    int nro, resto;

    printf("Digite um nro: ");
    scanf("%d", &nro);

    resto = nro % 2;

    if (resto == 0)
    {
        printf("Par");
    }
    else
    {
        printf("Impar");
    }
}