int main()
{

    int esclonha, n1, soma, res;

    printf("Digite 1 para ser impar \n");
    printf("Digite 2 para ser par \n");
    scanf("%d", &esclonha);

    srand(time(0));
    int a = rand() % 11;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    soma = n1 + a;
    res = soma % 2;

    if (esclonha == 1 && res == 1 || esclonha == 2 && res == 0)
    {
        printf("_____________________\n");
        printf("Voce ganhou\n");
        printf("O numero deu %d \n", soma);
        printf("Numero da maquina %d \n", a);
    }
    else
    {
        printf("_____________________\n");
        printf("Vocer perdeu\n");
        printf("O numero deu  %d \n", soma);
        printf("Numero da maquina %d \n", a);
    }

    return 0;
}