#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//. Escreva uma função que calcula o número fatorial de um número. Implementar uma
//versão recursiva e uma versão com laço de repetição.

int fatorial(int n) {
	if (n == 1) {
		return 1;
	}
	else
	{
		return n * fatorial(n - 1);
	}
}
int main() {
	int n = 9;
	printf("O valor de fatorialde N : %d", fatorial(n));

	return 0;
}