#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


struct pessoa {

	char nome[50];
	int idade;
	float altura;



};

int main() {

	struct pessoa p1;

	printf("Digite seu nome: ");
	scanf("%s", & p1.nome);

	printf("Digite sua idade: ");
	scanf("%d", & p1.idade);

	printf("Digite sua altura: ");
	scanf("%f", &p1.altura);



	printf("Nome: %s \n", p1.nome);
	printf("Idade: %d\n", p1.idade);
	printf("Altura: %f metros \n", p1.altura);

	
	return 0;
}