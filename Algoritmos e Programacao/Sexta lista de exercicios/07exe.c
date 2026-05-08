// 7 - Solicite que o usuário digite um número entre 10 e 20. Se for digitado um numero inválido, peça novamente, até que ele digite um número correto.

int main()
{
    int numUser;
    printf("Digite um numere entre 10 e 10:  ");
    scanf("%d", &numUser);

    while (numUser < 10 || numUser > 20)
    {
        printf("Esse numero nao e valido ");
        scanf("%d", &numUser);
    }
printf(" Numero valido : %d", numUser);
    return 0;
}