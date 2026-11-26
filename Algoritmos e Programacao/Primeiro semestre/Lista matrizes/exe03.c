
int main()
{
    // Definição do tamanho da matriz conforme o enunciado
    int matriz[20][20];
    int maior_soma = -1; // Guarda o maior valor de soma encontrado
    int linha_maior = 0; // Guarda o índice da linha com a maior soma

    srand(time(0));

    // 1. Preenche a matriz com números aleatórios entre 10 e 99
    for (int i = 0; i < 20; i++)
    {
        for (int x = 0; x < 20; x++)
        {
            // O sorteio deve acontecer aqui dentro para cada posição ser única
            matriz[i][x] = rand() % (99 - 10 + 1) + 10;
        }
    }

    // 2. Exibe a matriz na tela
    printf("--- MATRIZ 20x20 ---\n");
    for (int i = 0; i < 20; i++)
    {
        for (int x = 0; x < 20; x++)
        {
            printf("%d ", matriz[i][x]);
        }
        printf("\n");
    }
    printf("--------------------\n\n");

    // 3. Calcula a soma de cada linha e identifica a maior
    for (int i = 0; i < 20; i++)
    {
        int soma_linha = 0; // Zera a soma toda vez que muda de linha

        for (int x = 0; x < 20; x++)
        {
            soma_linha += matriz[i][x];
        }

        // Exibe a soma da linha atual (Linha + 1 apenas para visualização humana)
        printf("Soma da Linha %d = %d\n", i + 1, soma_linha);

        // Verifica se a linha atual tem a maior soma até agora
        if (soma_linha > maior_soma)
        {
            maior_soma = soma_linha;
            linha_maior = i + 1; // Guarda o número da linha (1 a 20)
        }
    }

    // 4. Exibe o resultado final
    printf("\nA linha com a maior soma é a Linha %d (Total: %d)\n", linha_maior, maior_soma);

    return 0;
}