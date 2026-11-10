
#include <stdio.h>

void marge(int a[], int esquerda, int meio, int direita) {

    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    int e[n1];
    int d[n2];

    for (int i = 0; i < n1; i++) {
        e[i] = a[esquerda + i];
    }

    for (int j = 0; j < n2; j++) {
        d[j] = a[meio + 1 + j];
    }

    int i = 0, j = 0, k = esquerda;

    while (i < n1 && j < n2) {

        if (e[i] <= d[j]) {
            a[k] = e[i];
            i++;
        }
        else {
            a[k] = d[j];
            j++;
        }

        k++;
    }

    while (i < n1) {
        a[k] = e[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = d[j];
        j++;
        k++;
    }
}

void margeSort(int a[], int esquerda, int direita) {

    if (esquerda < direita) {

        int meio = esquerda + (direita - esquerda) / 2;

        margeSort(a, esquerda, meio);
        margeSort(a, meio + 1, direita);

        marge(a, esquerda, meio, direita);
    }
}

int main() {

    int a[] = { 8, 3, 5, 1, 9, 2, 7, 4 };

    int tamanho = sizeof(a) / sizeof(a[0]);

    margeSort(a, 0, tamanho - 1);

    printf("Vetor ordenado: ");

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
