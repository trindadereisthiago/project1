#include <stdio.h>

int main() {
    char nome[30];
    int idade;

    printf("Qual seu nome: \n");
    scanf(" %s", &nome);
    fflush(stdin);

    printf("Qual sua idade: \n");
    scanf(" %i", &idade);
    fflush(stdin);

    printf("Nome: %s \n", nome);
    printf("Idade: %i \n", idade);

    getch();

    return 0;

}