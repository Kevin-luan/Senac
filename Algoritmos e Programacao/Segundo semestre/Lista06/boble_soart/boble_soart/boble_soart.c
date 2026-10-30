#include <stdio.h>

boble_soart(int a[], int final) {

	for (int j = 0; j < final  - 1; j++) {

		for (int i = 0; i < final - 1 - j; i++) {
			if (a[i] > a[i + 1]) {
				int axi = a[i];
				a[i] = a[i + 1];
				a[i + 1] = axi;
			}
		}

	}


	for (int i = 0; i < final; i++) {
		printf("%d ", a[i]);
	}

}
int main() {

	int a[] = { 9,9,7,6,5 };
	int fim = 5;

	boble_soart(a, fim);

	return 0;
}