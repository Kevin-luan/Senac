

#include <stdio.h>
void booble_sort(int a[], int fim) {
	for (int j = 0; j <= fim; j++) {
		int tro = 0;
		for (int i = 0; i < fim - j; i++) {
			if (a[i] > a[i + 1]) {
				int aux = a[i];
				a[i] = a[i + 1];
				a[i + 1] = aux;
				tro = 1;
			}
		}

		if (tro == 0) {
			break;
		}
	}
}

void insertion_sort(int a[], int fim) {

	for (int i = 1; i < fim; i++) {
		int chave = a[i];
		int j = i - 1;

		while (j >= 0 && a[j] > chave) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = chave;
	}
}


void merge(int a[], int comeco, int meio, int fim) {
	int i = comeco;
	int j = meio;
	int k = 0;
	int temp[fim - comeco];

	while (i < meio && j < fim) {

		if (a[i] <= a[j]) {

			temp[k] = a[i];
			i++;
			k++;


		}
		else {
			temp[k] = a[j];
			j++;
			k++;
		}

	}
	while (i < meio) {
		temp[k] = a[i];
		i++;
		k++;
	}
	while (j < fim) {
		temp[k] = a[j];
		k++;
		j++;
	}


	for (int i = comeco, k = 0; i < fim; i++, k++) {
		a[i] = temp[k];
	}

}

void merge_sort(int a[], int comeco, int fim) {

	if (comeco < fim - 1) {
		int meio = (comeco + fim) / 2;
		merge_sort(a, comeco, meio);
		merge_sort(a, meio, fim);
		merge(a, comeco, meio, fim);

	}
}
int main()
{
	int a[] = { 5,4,3,2,1 };
	int fim = 5;
	// booble_sort(a,fim);
	//insertion_sort(a, fim);
	merge_sort(a, 0, fim);


	for (int i = 0; i < fim; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}