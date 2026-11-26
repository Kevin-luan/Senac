// 4 - Escreva um programa que solicita 10 números e ao final exibe a soma de todos eles.

int main()
{

    int x = 1;
    int res = 0;
    int con = 0;

    while (x <= 10)
    {
        printf("Digite um numero");
        scanf("%d", &con);
        res = con + res;
        x++;
    }
    printf(" a soma de tudo foi : %d", res);
    return 0;
}