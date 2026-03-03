#include <stdio.h>

void calculoDaMedia(){
    float nota1, nota2,media;
    printf("Digite a nota 1:");
    scanf("%f/n", &nota1);
    printf("Digite a nota 2:");
    scanf("%f/n", &nota2);
    media= nota1+nota2 /2;
    printf("Sua media è:%f", media);
}
void automovel(){
   float consumo,distancia,volCombustivel;
   printf("Digite a distancia:\n");
   scanf("%f", &distancia);
   printf("Digite a quantidade de combustivel:\n");
   scanf("%f", &volCombustivel);
   consumo= distancia/volCombustivel;
  printf("O consumo foi de %fkm por litro", consumo );
}
void lucroFesta(){
    float valHomen=20, valMulher=17, lucro;
    int quntHomen,quantMulher;

    printf("Digite a quantidade de Homens na festa\n");
    scanf("%d", &quntHomen);
    printf("Digite a quantidade de Mulheres na festa");
    scanf("%d", &quantMulher);
    lucro= (valHomen * quntHomen) + (valMulher * quantMulher);
    printf("O lucro foi de :%f", lucro);
}
void volumeDoCilindro(){

       float volumeCilindro,raio,altura, pi=3.14;
       // volume= pi* raio*raio * altura

       printf("Didite a medida do raio: ");
       scanf("%f", &raio);
       printf("Digite a altura: ");
       scanf("%f", &altura);

       volumeCilindro = pi* (raio * raio) * altura;

       printf("o volume do cilinfro e :%f", volumeCilindro);





}


int main()
{
   //calculoDaMedia();
  // automovel();
  //lucroFesta();
  volumeDoCilindro();


    return 0;
}
