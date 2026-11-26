//2 - Escreva um programa que exibe o quadrado de todos os números de 1 a 20.
 int main(){
 int nuQ=1;
 int res=0;

    while (nuQ<=20)
    {
            res= nuQ * nuQ;
            printf("%d ^ 2 = %d \n " , nuQ, res);

        nuQ++;
    }
    

    return 0;

 }