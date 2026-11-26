//  2a - (já pode ter sido feito anteriormente)Adivinhe o número - Crie um programa que solicita um número
// ao usuário entre 1 e 10, sorteia um outro número dentro desta faixa de valores, e então diz se os dois
// números são iguais.2b - Faça um aprimoramento do programa anterior.Desta vez, seu programa deverá dar dicas,
// dizendo se o numero sorteado é maior ou menor, e permitir um novo palpite do usuário,
// ATÉ ELE ACERTAR.Mostrar quantas tentativas foram efetuadas(ele não irá sortear o número novamente).

int main()
{
    srand(time(0));
    int aleatoreio = rand() % 10 + 1;
    int n1 = 0, cont = 1;
    scanf("%d", &n1);

    while (aleatoreio != n1)
    {
        if (n1 < aleatoreio)
        {
            printf("o numero e maior ");
            scanf("%d", &n1);
        }
        else
        {
            printf("o numero e menor ");
            scanf("%d", &n1);
        }
        cont++;
    }
    printf("Voce acertou o numumer era %d  %d tentativas  ", aleatoreio, cont);
    return 0;
}
