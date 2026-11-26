
#include <stdio.h>
void main (){
//Altere o exercício anterior de forma que ele informe também se os números são iguais.
int num01,num02;
printf("Digite um numero: ");
       scanf("%d", &num01);
printf("Digite o numero 02: ");
       scanf("%d", &num02);

        if(num01==num02){
              printf("Os numeros sao iguais");
        }
        else if(num01>num02){
              printf("O numero :%d e maior", num01);
       }else{
              printf("O numero :%d e maior", num02);
       }

return  0;
}
