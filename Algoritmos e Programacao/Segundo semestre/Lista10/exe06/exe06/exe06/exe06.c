
#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>




	typedef struct {
		char nome[50];
		int idade;

	} Pessoa;
	Pessoa p1;
	Pessoa p2;
	Pessoa p3;
	Pessoa p4;
	


#define MAX 10
Pessoa pilha[MAX];
int topo = -1;


int isEmpty() {
	return topo < 0;
}

int size() {
	if (isEmpty()) {
		printf("Apilha esta vazia");
		return -1;

	}
	return topo + 1;

}
void push(Pessoa valor) {
	if (topo == MAX - 1) {
		printf("Pilha cheia!\n");
		return;
	}
	topo++;
	pilha[topo] = valor;
}

Pessoa pop() {

	Pessoa vazia = { "", -1 };

	if (isEmpty()) {
		printf("Pilha vazia!\n");
		return vazia;
	}

	Pessoa valor = pilha[topo];
	topo--;

	return valor;
}


int main() {

	strcpy(p1.nome, "Kevin");
	p1.idade = 20;

	strcpy(p2.nome, "Maria");
	p2.idade = 25;

	strcpy(p3.nome, "Joao");
	p3.idade = 18;

	strcpy(p4.nome, "Ana");
	p4.idade = 30;
	



	push(p1);
	push(p2);
	

	Pessoa removida = pop();

	printf("Saiu da pilha: %s\n", removida.nome);
	printf("Idade: %d\n", removida.idade);


	push(p3);
	printf("%s entrou na fila!\n", p3.nome);

	






	
	
	return 0;
}