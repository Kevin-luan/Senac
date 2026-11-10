#include <stdio.h>


void insertion_soart(int v[],int fim) {
	int i, j, aux;

	for (i = 1; i < fim; i++) {

		aux = v[i];
		j = i - 1;

		while (j >= 0 && aux < v[j]) {
			v[j+1] = v[j ];
			j--;
		}

		v[j + 1] = aux;
	}


	for (int i = 0;i < fim;i++) {
		printf("%d ", v[i]);
	}
 }
int main() {

	int v[] = { 5,4,3,2,1 };
	int fim = 5;
	insertion_soart(v, fim);
	return 0;
}