#include <stdio.h>
void main (){
//Escrever um algoritmo que leia dois valores inteiro distintos e informe qual deles é o maior.
int num01,num02;
printf("Digite um numero: ");
       scanf("%d", &num01);
printf("Digite o numero 02: ");
       scanf("%d", &num02);

              if(num01>num02){
                     printf("O numero :%d e maior", num01);
              }else{
                      printf("O numero :%d e maior", num02);
              }
return  0;
}
