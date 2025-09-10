#include <stdio.h>
#include <string.h>
int main() {
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%i", &idade);
    printf("Digite seu salario: ");
    scanf("%lf", &salario);
    printf("Digite seu altura: ");
    scanf("%lf", &altura);
    printf("Digite seu genero: ");
    scanf(" %c", &genero);
    printf("Digite seu nome: ");
    scanf("%s", nome);


    printf("Idade = %d\n", idade);
    printf("Salario = %.2f\n", salario);
    printf("Altura = %.2f\n", altura);
    printf("Genero = %c\n", genero);
    printf("Nome = %s\n", nome);
    return 0;
}