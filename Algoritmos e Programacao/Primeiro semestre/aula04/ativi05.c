#include <stdio.h>

void main(){
//Crie um programa que recebe um número inteiro e informa se este número é múltiplo de 10.

int numero,res;
printf("Digite o numero: ");
       scanf("%d", numero);


       res= numero %10 ;

       if(res==0){
              printf("O numero e multiplo de 10");
       }else{

              printf("O nao numero e multiplo de 10");
       }


}
