#include <stdio.h>

void main(){

//Crie um programa que recebe dois números inteiros. Exiba a mensagem "sim"
//apenas caso ambos sejam maiores que 10.

int num01, num02;

printf("Digite o numero 1: ");
       scanf("%d", &num01);
printf("Digite o numero 2: ");
       scanf("%d", &num02);

       if(num01>10 && num02 >10){
              printf("Os numeros sao maiores quie 10");
       }
return 0;
}
