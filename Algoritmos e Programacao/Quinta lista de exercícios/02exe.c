int main(){

srand(time(0));
int a = rand() % 10;
int b = rand() % 10;
int c = rand()% 10;


// validacao se os valores forma um triangolo 

if(a+b>c && a+c>b && b+c>a )
{
    printf("E uim triangolo valido\n");

    // triangolo Equilatero 

if(a==b && b==c){
    printf("Equilatero\n");
}
// triangolo Isósceles

else if(a==b || a==c || c==b){
    printf("Isosceles\n");
}
// triangollo escaleno
else{
printf("Escaleno\n");
}

printf("os valores do A :%d do B : %d e do C : %d", a, b, c );
    
}else{
    printf("Esses numeros nao sao validos\n");
    printf("os valores do A :%d do B : %d e do C : %d", a, b, c );
}


return 0;
}