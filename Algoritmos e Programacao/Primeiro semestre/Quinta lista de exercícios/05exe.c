int main(){
srand(time(0));
    int a = rand()% 5 +1; 
    int b = rand()% 5 +1 ;
int n1, n2 ;



printf("Digite o numero 01 :");
scanf("%d", & n1);

printf("Digite o numero 02: ");
scanf("%d", & n2);




if( n1==a && n2 ==b || n1==b && n2 ==a){

    printf("deu bom ");
}else{
     printf("Voce errou ");
}
    return 0;
}