#include <stdio.h>


 main(){

 int x,modulo;
 printf("Digite um nome de 1 a 100 : ");
 scanf("%d", &x);



if (x<100 && x>0){
   modulo =  x %2;

     if(modulo ==0){
       printf("O Numero %d e par",x);
     }else{
     printf("o Numero %d e impar",x);
     }

}else{
printf("Esse numero nao e valido");

}
return 0;
}




