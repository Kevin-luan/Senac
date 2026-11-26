int main()
{

    srand(time(0));

    int a = rand() % 10 + 1;
    int n1;
printf("%d\n\n\n", a);
    printf("Digite um numeros: ");
    scanf("%d", &n1);

    if (n1 == a)
    {
        printf("Voce acertou ");
    }
    else if (a < n1)
    {

        printf("O numero e menor\n");
        printf("Digite novamnete :\n");

        scanf("%d", &n1);
        if (n1 == a)
        {
            printf("Voce acertou ");
        }
        else
        {
            printf("Voce errou novemente");
        }
    }
    else if (a > n1)
    {
        printf("O numero e maior\n");
        printf("Digite novamnete :\n");

        scanf("%d", &n1);
        if (n1 == a)
        {
            printf("Voce acertou ");
        }
        else
        {
            printf("Voce errou novemente");
        }
    }

    return 0;
}