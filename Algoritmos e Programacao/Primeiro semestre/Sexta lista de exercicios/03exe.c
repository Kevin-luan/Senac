// 3 - Escreva um programa que solicita 5 números ao usuário, e para cada número digitado, informa se este é par ou ímpar.s

int main()
{

    int x = 1;
    int valor = 0;

    while (x <= 5)
    {
        printf("Digite um valor");
        scanf("%d", &valor);
        if (valor % 2 == 0)
        {
            printf("O numero %d e par \n", valor);
        }
        else
        {
            printf("O numero %d e impar \n", valor);
        }
        x++;
    }

    return 0;
}