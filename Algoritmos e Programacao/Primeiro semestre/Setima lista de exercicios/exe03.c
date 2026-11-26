// 3 - Criar um algoritmo que imprima a soma dos números pares entre 25 e 200.
int main()
{
    int pares = 25, res = 0, modolo = 0;
    while (pares >= 25 && pares <= 200)
    {
        modolo = pares % 2;
        if (modolo == 0)
        {
            res = res + pares;
        }

        pares++;
    }
    printf("a soma dos numeros parares sao: %d", res);
    return 0;
}