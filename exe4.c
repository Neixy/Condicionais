/*4. Faca um programa que leia um numero e, caso ele seja positivo, calcule e mostre:
O numero digitado ao quadrado 
A raiz quadrada do numero digitado*/
#include <stdio.h>
#include <math.h>
int main()
{

    int nro, raiz, quadrada;

    printf("Digite um nro positivo: ");
    scanf("%d", &nro);

    if (nro >= 0)
    {
        raiz = sqrt(nro);
        quadrada = pow(nro, 2);
        printf("Ao quadrado: %d\n", quadrada);
        printf("Raiz quadrada: %d", raiz);
    } else {
        printf("Isso e um nro negativo");
    }
}