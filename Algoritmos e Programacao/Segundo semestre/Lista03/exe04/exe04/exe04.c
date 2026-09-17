#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//Escreva uma função recursiva que recebe um array de inteiros e retorna o produto
//dos elementos do array

int produto(int n[], int i) {

	if (i == 0) {
		return n[0]; 
	}

	return n[i] * produto(n, i - 1);

}
int main() {

	int n[3];

	for (int i = 0; i <= 2; i++) {
		printf("Didite %d* numero: ", i+1);
		scanf("%d", &n[i]);
	
	}

	int resultado = produto(n, 2);

	printf("Produto do arrey e : %d", resultado);
	return 0;


}