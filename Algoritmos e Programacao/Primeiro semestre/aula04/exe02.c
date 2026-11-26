#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
int ran1,ran2,ran3;

srand(time(NULL));

       ran1 = (rand() %10)+1;
        ran2 = (rand() %10)+1;
         ran3 = (rand() %10)+1;
         printf("%d \n", ran1);
         printf("%d \n", ran2);
         printf("%d \n", ran3);

// Triangolo
 int a=6,b=6,c=6;
if(a+b >c && c+b >a && c+a >b){
       if( a==b && b==c){
              printf("Equilatero");
       }else if(a==b ||b==c || c==a){
               printf("Isosceles");
       }
}else{
printf("Nao pode ser");
}








return 0;

}
