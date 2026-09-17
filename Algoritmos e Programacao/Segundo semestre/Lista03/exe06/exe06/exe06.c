#include <stdio.h>

//Escreva a função para cálculo do N - ésimo termo da sequência de Fibonacci
//utilizando recursividade.

int fibonacci(int i) {

	if (i == 0) {
		return 0;
	}
	if (i == 1) {
		return 1;
	}
	
		return fibonacci(i - 1) + fibonacci(i - 2);
	



}


int main() {
	int p = 9;

		printf("%d", fibonacci(p));
		return 0;

	

	
}