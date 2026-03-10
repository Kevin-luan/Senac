#include <stdio.h>
//Faça um algoritmo que receba um número e mostre a mensagem "Sim"
// caso este número seja maior que 10. Se for menor ou igual,
// o programa deve encerrar sem exibir mais nada.
void main()
{
       float num;


printf("Digite uim numero");
       scanf("%f",&num);
       if(num>10){
              printf("O numero: %f e maior que 10", num);
       }
return 0;
}
