// 1 - Solicite um número e então diga se este é um número perfeito.

int main()
{

    int n1 = 0, contador = 1, modulo = 0, res = 0;

    scanf("%d", &n1);
    while (contador < n1)
    {
        modulo = n1 % contador;

        if (modulo == 0)
        {
            res = res + contador;
        }

        contador++;
    }
    if (n1 == res)
    {
        printf("A soma e : %d entao ele e um numero perfeito ", res);
    }
    else
    {
        printf("Nao e um numero perfeito ");
        }

    return 0;
}