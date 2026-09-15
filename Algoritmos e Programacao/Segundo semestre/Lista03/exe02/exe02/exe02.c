#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Escreva uma função recursiva que calcula a potência de um número inteiro x
//elevado a um número inteiro y.

int recursiva(int x, int y) {
	if (y == 0) {
		return 1;
	}
	else {
		return x * recursiva(x, y - 1);

	}

	
}

int main() {
	int x = 9;
	int y = 2;

	printf("O valor : %d",recursiva(x, y));

	return 0;
}
