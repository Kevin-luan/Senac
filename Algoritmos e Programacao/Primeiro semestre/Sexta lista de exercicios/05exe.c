// 5 - Escreva um programa que exibe a soma dos números de 1 a 100
int main()
{
    int con = 0, soma = 0;
    while (con <= 100)
    {
        soma = soma + con;
        printf("%d\n", soma);
        con++;
    }

    return 0;
}