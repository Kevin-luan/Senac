// 6 - Escreva um programa que solicita um número ao usuário, e então exibe todos os seus divisores.
// Ex : Se informado 12, deve exibir : 12 6 4 3 2 1

int main()
{

    int numUser = 0, con = 1;
    printf("Digite um numero");
    scanf("%d", &numUser);

    while (con <= numUser)
    {
        if (numUser % con == 0)
        {
            printf("%d \n", con);
        }

        con++;
    }

    return 0;
}