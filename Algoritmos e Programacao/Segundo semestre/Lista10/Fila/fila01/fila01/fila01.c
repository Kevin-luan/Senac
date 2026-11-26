#include <stdio.h>


#define Max 5
int fila[Max];
int inicio = -1;
int fim = -1;

int isEmpty() {
	 return  inicio <0 || inicio > fim;
}
int size() {
	if (isEmpty()) {
		return 0;
	}


	return fim - inicio + 1;

 }

int front() {
	if (isEmpty()) {
		printf("Fila vazia");
		return -1;
	}
	return fila[inicio];

}

int rear() {
	if (isEmpty()) {
		printf("Fila vazia");
		return -1;
	}

	return fila[fim];
}
void enqueue(int valor) {
	if (fim == Max - 1) {
		printf("A fila esta cheia");
		return;
	}

	if (inicio == -1) {
		inicio = 0;
	}
	fim++;
	fila[fim] = valor;

}
int desqueue() {
	if (isEmpty()) {
		printf("A Fila esta vazia ");
		return -1;
	}
	int valor = fila[inicio];
	inicio++;

	return valor;

}

void clear() {
	inicio = -1;
	fim = -1;
}


int main() {
	enqueue(4);
	enqueue(33);
	enqueue(2);


	printf("Primeio elemento da fila %d\n" ,front());

	printf("removendo  %d\n", desqueue());
	printf("Primeio elemento da fila %d\n", front());

	printf("Ultimo elemento da fila %d\n", rear());

	printf("Tamanho da fila  %d\n", size());

	clear();

	printf("Tamanho da fila  %d\n", size());


	





	return 0;
}