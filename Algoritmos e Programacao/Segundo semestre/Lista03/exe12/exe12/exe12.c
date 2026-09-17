
#include <stdio.h>

void sucessoes(int a, int b, char sequencia[], int pos) {

    // Caso base: não existem mais gols para colocar
    if (a == 0 && b == 0) {
        sequencia[pos] = '\0';
        printf("%s\n", sequencia);
        return;
    }

    // Coloca um gol do time A
    if (a > 0) {
        sequencia[pos] = 'A';
        sucessoes(a - 1, b, sequencia, pos + 1);
    }

    // Coloca um gol do time B
    if (b > 0) {
        sequencia[pos] = 'B';
        sucessoes(a, b - 1, sequencia, pos + 1);
    }
}

int main() {

    int m = 3;
    int n = 4;

    char sequencia[100];

    sucessoes(m, n, sequencia, 0);

    return 0;
}