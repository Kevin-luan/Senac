#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct pessoa {

	char nome[30];
	int idade;
	float altura;
};
struct pessoa p;

void exebirPessoas() {
	printf("Nome: %s \n",p.nome);
	printf("Idade: %d \n", p.idade);
	printf("Altura: %f \n", p.altura);
}


int main() {
	printf("Digite o nome: ");
	scanf("%s", &p.nome);

	printf("Digite a idade: ");
	scanf("%d", &p.idade);

	printf("Digite a altura ");
	scanf("%f", &p.altura);

	exebirPessoas(p.nome , p.idade, p.altura);


	return 0;
}