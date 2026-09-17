#include <stdio.h>
//Fazer um programa em "C" que lê um string do teclado e se utiliza de uma rotina
//recursiva para imprimir o string de maneira normal e de trás para frente.
void ler(char *str, int i) {
	if (str[i] == '\0') {
		return 0;
	}
	else {
		printf("%c", str[i]);
		
		ler(str, i + 1);
		
	}
}
void lerinvertido(char* str, int i) {
	if (str[i] == '\0') {
		return 0;
	}
	else
	{
		ler(str , i + 1);
		printf("%c", str[i]);

	}
	return 0;
}

int main() {
	char nome[] = "Kevin";

	ler(nome, 0);
	printf("\n");
	lerinvertido(nome, 0);

	return 0;
}