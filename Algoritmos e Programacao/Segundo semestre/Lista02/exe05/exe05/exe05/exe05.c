#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>

#include <stdio.h>


int main() {
	int n1 = 34;
	int *ptrN1= &n1;


	printf("Valor da vareavel: %d \n", n1);
	printf("Endereco  vareavel: %x\n", &n1);

	printf("Valor da vereval ptrN1: %x\n", ptrN1);

	
	return 0;
}
