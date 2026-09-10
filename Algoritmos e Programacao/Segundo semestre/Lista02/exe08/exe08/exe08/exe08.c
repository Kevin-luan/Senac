#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Faça uma função void swap(int *a, int *b) que troque os valores de duas variáveis.


void swap(int* a, int* b) {
	int c = *b;
	*b = *a;
	*a = c;

	printf("um: %d \n", *a);
	printf("dois: %d \n", *b);
}
int main() {
	int a = 1, b = 2;

	swap(&a, &b);

	





	
	return 0;
}