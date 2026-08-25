#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int velMaxAvenida=100, veleMaxCarro, valorMulta;
 

    printf("Velocidade Carro: ");
    scanf("%d" , & veleMaxCarro );

    valorMulta = (veleMaxCarro - velMaxAvenida  ) * 5;
   
    if (veleMaxCarro > velMaxAvenida) {
        printf("Sua multa e de :%d R$", valorMulta);
    }
    else
    {
        printf(" não há multa");
    }


    
    return 0;
}