#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//Crie uma função que recebe dois ponteiros para inteiros e retorna a soma dos
//valores.

int somaPonteiros(int *ptrN1, int *ptrN2) {


	return *ptrN1 + *ptrN2;
}
int main() {

	int x = 50;
	int y = 10;

	printf("A soma e : %d ", somaPonteiros(&x, &y));
	
	return 0;
}