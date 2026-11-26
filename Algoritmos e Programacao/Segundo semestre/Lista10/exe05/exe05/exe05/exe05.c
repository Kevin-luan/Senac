#include <stdio.h>
#include <string.h>
  
//Leia uma string e use uma pilha para imprimi-la ao contrário.
#define MAX 100
char pilha[MAX];
int topo = -1;


int isEmpty() {
	return topo < 0;
} 
void push(char valor) {
	if (topo == MAX - 1) {
		printf("A pilha esta cheia");
		return;
	}
	topo++;
	pilha[topo] = valor;

}

char pop() {
	if (isEmpty()) {
		printf("Pilha vazia");
		return -1;
	}

	char valor = pilha[topo];
	topo--;
	return valor;
}


int main() {
	
	push('1');
	push('2');
	push('3');
	push('4');
	push('5');


	printf("%c \n", pop());
	printf("%c \n", pop());
	printf("%c \n", pop());
	printf("%c \n", pop());
	printf("%c \n", pop());
	return 0;
}