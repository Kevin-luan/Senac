#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

struct endereco {
	char rua[20];
	char numero[20];
	char cidade[20];
};
struct endereco e;

struct pessoas {
	char nome[20];
	int idade;
	float altura;
	endereco e;
	
};
struct pessoas p;

void ExibirPessoa(pessoas p) {
	printf("\n--- ENDERECO DE %s ---\n\n\n\n", p.nome);
	printf("Rua: %s \n", p.e.rua);
	printf("Numero: %s \n",p.e.numero);
	printf("Cidade: %s \n", p.e.cidade);
}

int main() {


	printf("Digite o nome da pessoa: ");
	scanf(" %s", & p.nome);

	printf("Digite a idade: ");
	scanf("%d", & p.idade);

	printf("Digite o nome da  rua: ");
	scanf("%s ", & p.e.rua);
	

	printf("Digite o numero: ");
	scanf("%s", & p.e.numero);


	printf("Digite a cidade: ");
	scanf("%s", & p.e.cidade);


	ExibirPessoa(p);

	
	return 0;
}