

int main()
{
    int matiz[3][3]= {0};

    matiz[1][1] = 9;
    for (int con = 0; con <= 2; con++)
    {
        for (int i = 0; i <= 2; i++)
        {
            printf("%d ", matiz[i][con]);
        }
        printf("\n");
    }

    return 0;
}
