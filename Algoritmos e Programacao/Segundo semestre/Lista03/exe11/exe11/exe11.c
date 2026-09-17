#include <stdio.h>

// Escreva a função recursiva que recebe um número inteiro e imprime seu valor
//binário na tela


void binario(int n) {

	if (n == 0) {
		return;
	}
	else {
		binario(n / 2);
		printf("%d", n % 2);
		
	}

}
int main() {
	int n = 88;

	binario(n);
	return 0;
}