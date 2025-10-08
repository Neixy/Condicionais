/*3. Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do contrario, imprima o numero ao quadrado.*/
#include <stdio.h>
#include <math.h>

int main(){

    float n;

    printf("Digite um nro para calcular a raiz quadrada: ");
    scanf("%f", &n);

    if (n >= 0)
    {
        n = sqrt(n);
        printf("Raiz = %f", n);

    } if ( n < 0) {
        n = pow(n,2);
        printf("Ao quadrado = %f", n);
    }   

}