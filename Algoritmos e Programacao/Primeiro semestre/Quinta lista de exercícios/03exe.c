

int main()
{
srand(time(0));
int a = rand()%10 +1 ;
int n1;

printf("Digite o numero n1: ");
scanf("%d", & n1);

if( n1 == a){
    printf("Parabens!!! vc acertou");
}else if ( n1 != a)
{
        printf("Voce errou \n ");
    printf("Tente mais uma vez: \n");

    scanf("%d", & n1);

    if(n1 == a){

    printf("Voce ganhou");
    }else{
    printf(" vc errou mais uma vez!!!");
}

}








 






    
 return 0;


}