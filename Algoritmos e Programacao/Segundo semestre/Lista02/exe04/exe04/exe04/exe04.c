#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
char pessoas[2][20];

void addPessoas() {
	
	for (int i = 0; i <= 2; i++) {
		printf("Digite o nome: ");
		scanf("%s", pessoas[i]);
		
	}

}

void mostrarPessoas() {

	char procura[20];
	printf("Digite o nome que vc quer ");
	scanf("%s", &procura);
	


	for (int i = 0; i <= 2; i++) {

		if (procura == pessoas[i]) {
			printf("Nome encontrado ");
			printf("nome %s: \n", procura);
			i = 5;
		}
		
		

	}
}
int main(){
	
	addPessoas();
	mostrarPessoas();

	return 0;
}