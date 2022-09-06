/*
Fazer um programa para ler idades e ao final mostrar a média aritmética das
idades.Flag será IDADE = “-1”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{
    setlocale (LC_ALL, "Portuguese");

    int idade;
    int soma = 0;
    int contador = 0;

    printf("Informe a primeira idade: ");
    scanf("%d", &idade);

    while ( idade != -1 )
    {
        soma += idade;
        contador++;
        printf("Informe a próxima idade: ");
        scanf("%d", &idade);
    }

    printf("A média de todas as idades é %d", (soma/contador) );

}
