/*9. Leia o salario de um trabalhador e o valor da prestacao de um emprestimo. Se a
prestacao for maior que 20% do salario imprima: Emprestimo nao concedido, caso
contrario imprima: Emprestimo concedido.*/
#include <stdio.h>
int main()
{

    float salario, emprestimo, vinte;

    printf("Digite o valor do salario de um trabalhador: ");
    scanf("%f", &salario);
    printf("\nDigite o valor da prestacao do emprestimo: ");
    scanf("%f", &emprestimo);

    vinte = (salario * 20) / 100;

    if (emprestimo <= vinte)
    {
        printf("Emprestimo concedido");
    }
    else
    {
        printf("Emprestimo nao concedido");
    }
}