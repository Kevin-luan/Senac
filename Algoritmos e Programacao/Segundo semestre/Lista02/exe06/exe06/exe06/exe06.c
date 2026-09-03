#define _CRT_SECURE_NO_WARNINGS
// Declare uma variável, passe seu endereço para uma função e modifique seu valor
//dentro da função.

#include <stdio.h>
int n1 = 77;
int *ptrN1 = &n1;

void endereco(int *ptrN1) {
	*ptrN1 =20;

	printf("O valor : %d\n", n1);
	
}
int main() {


	endereco(ptrN1);
	printf("Valor de n1: %d", n1);
	

	return 0;
}