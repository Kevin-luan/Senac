#include <stdio.h>

void main(){
//Solicite que o usuário digite um número. Informe então se este número é par ou ímpar.

   // Declaracao de variaveis
   int numDigitado,res;
   //entrada de dados
   printf("Digite o numero: ");
   scanf("%d", &numDigitado);

   //Processamento
   res = numDigitado % 2 ;

  //Saida
  if(res==0){
       printf("O numero:%d e Par", numDigitado);
  }else{
   printf("O numero:%d e Impar", numDigitado);
  }
return 0;

}
