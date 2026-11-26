

int main()
{

    // 1 - Escreva um programa que exibe qualquer tabuada completa. O programa deve perguntar ao usuário qual tabuada ele deseja visualizar, que irá responder digitando um número de 1 a 10.
    int tabuada = 0;
    int x = 0;
    int res = 0;
    printf("Digite qual tabuada voce quer : ");

    scanf("%d", &tabuada);

    while (x <= 10)
    {

        res = tabuada * x;
        printf("%d X %d = %d \n", tabuada, x, res);
        x++;
    }

    return 0;
}