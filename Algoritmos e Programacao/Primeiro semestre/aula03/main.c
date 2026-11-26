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

                     //Declaracao de varioaveis
       float volumeCilindro,raio,altura, pi=3.14;
       // volume= pi* raio*raio * altura


                     //Entrada
       printf("Didite a medida do raio: ");
       scanf("%f", &raio);
       printf("Digite a altura: ");
       scanf("%f", &altura);
                     // Processamento
       volumeCilindro = pi* (raio * raio) * altura ;
                     // Saida
       printf("o volume do cilindro e :%f", volumeCilindro);

}
void valoresDoCoeficientes(){
       // Declaracao de variaveis
       float delta,b,a,c ;
       // Entrada de dados
       printf("Digite o valor de B: ");
       scanf("%f", &b);

       printf("Digite o valor de A: ");
       scanf("%f", &
             a);

       printf("Digite o valor de c: ");
       scanf("%f", &c);

       //Precessamento de dados
       delta= (b*b) -4*a*c;

       //saida
       printf("Delta:%f ", delta );

}
void imparPar(){
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



}
void fahrenheit(){


              //Declaracao de variveis
              float temperatura,temperaturaFahrenheit;

              //Entrada de dados
              printf("Digite a temperatura: ");
              scanf("%f", &temperatura);

       //Processamento
       temperaturaFahrenheit = (temperatura *1.8)+32;

       //Saida
       printf(" A temperatura em fahrenheit e : %f", temperaturaFahrenheit);



}
void mediaAritmetica(){
//Declaracaod e variaveis
              float n1,n2,n3,res;

              //Entrada de dados
              printf("Digite o numero 1: ");
              scanf("%f", &n1);

               printf("Digite o numero 2: ");
              scanf("%f", &n2);

               printf("Digite o numero 3: ");
              scanf("%f", &n3);

              //Processamento

             res= (n1+n2+n3) / 3;

              //saida

              printf("A media e :%f ", res);
}




int main()
{
   //calculoDaMedia();
  // automovel();
  //lucroFesta();
  //volumeDoCilindro();
  //valoresDoCoeficientes();
  //imparPar();
 // fahrenheit();
// mediaAritmetica();

    return 0;
}
