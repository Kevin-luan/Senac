// 2 - Crie uma matriz 10x10. Atribua o número 8 a todos os elementos da matriz. Atribua então o número 0 a um elemento randômico da matriz. Exiba a matriz na tela.

int main()
{

    srand(time(0));
    int numRand = rand() % 9;
    int numRand2 = rand() % 9;

    int matriz[10][10] = {0};

    for (int x = 0; x < 10; x++)
    {

        for (int i = 0; i < 10; i++)
        {
            matriz[x][i] = 8;
        }
    }
    matriz[numRand][numRand2] = 0;

    for (int x = 0; x < 10; x++)
    {

        for (int i = 0; i < 10; i++)
        {
            printf("%d ", matriz[x][i]);
        }
        printf("\n");
    }
    return 0;
}