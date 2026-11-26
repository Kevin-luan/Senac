#include <stdio.h>

#define Max 5
int pilha[Max];
int topo = -1;
int valor;

int isEmpy(int pilha[]) {
	if (topo < 0) {
		return -1;
	}
	return topo;
}
int size() {
	return topo + 1;
}
void push(int valor) {
	if (topo == Max - 1) {
		printf("pilha cheia \n");
		return;
	}
	topo++;
	pilha [topo] = valor;
}

int  pop() {
	if (topo < 0) {
		printf("Fila vazia \n");
		return -1;
	}
	int valor = pilha[topo];
	topo--;
	return valor;
}

int peek() {

	if(isEmpy(pilha) <0) {
		printf("pilha vazia \n");
		return -1;
	}
	return pilha[topo];
}

int main() {

	push(10);
	printf("topo da lista %d \n", peek());
	push(14);

	printf("Valor que foi removido %d \n", pop());

	printf("topo da lista %d \n", peek());


	return 0;
}


