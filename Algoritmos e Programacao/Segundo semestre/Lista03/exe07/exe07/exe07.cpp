#include <stdio.h>
//Escreva a função para cálculo do N - ésimo termo da sequência de Lucas utilizando
//recursividade

int lucas(int i) {

	if (i == 0) {
		return 2;
	}
	if (i == 1) {
		return 1;
	}

	return lucas(i - 1) + lucas(i - 2);




}


int main() {
	int p = 9;

	printf("%d", lucas(p));
	return 0;




}