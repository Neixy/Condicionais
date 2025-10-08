/*10. Faca um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes formulas (onde h corresponde a altura):
Homens: (72.7 - h) - 58
Mulheres: (62.1 - h) 􀀀 44.7*/
#include <stdio.h>
int main()
{

    float h, pesoideal;
    char sexo;

    printf("Digite a altura da pessoa: ");
    scanf("%f", &h);
    printf("Digite F para feminino ou M para masculino: ");
    scanf("%s", &sexo);

    if (sexo == 'M' || sexo == 'm')
    {
        pesoideal = (72.7 - h) - 58;
        printf("Peso ideal = %.2f", pesoideal);
    }
    if (sexo == 'F' || sexo == 'f')
    {
        pesoideal = (62.1 - h) - 44.7;
        printf("Peso ideal = %.2f", pesoideal);
    }
}