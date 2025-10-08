/*2. Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz quadrada do numero.
Se o numero for negativo, mostre uma mensagem dizendo que o numero e invalido.*/
#include <stdio.h>
#include <math.h>
int main()
{

    int n;

    printf("Digite um nro para calcular a raiz quadrada: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        n = sqrt(n);
        printf("Raiz = %d", n);

    } else {
        printf("Numero invalido");
    }
}