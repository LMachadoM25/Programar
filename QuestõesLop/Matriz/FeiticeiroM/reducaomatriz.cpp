#include <iostream>

int main ()
{
    int lin, col;

    std::cin >> lin >> col;

    int matriz[lin][col];

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> matriz[i][j];
        }
    }

    if (lin % 2 !=0 && col % 2 != 0)
    {
        lin = lin - 1;
        col = col - 1;
    }
    
    int linredu = lin / 2;
    int colredu = col / 2;
    int nmatriz[linredu][colredu];

    int soma;
    
    for (int i = 0; i < linredu; i++)
    {
        for (int j = 0; j < colredu; j++)
        {
            soma = 0;

            for (int x = i * 2; x < (i * 2) + 2 && x < lin; x++)
            {
                for (int y = j * 2; y < (j*2) + 2 && y < col; y++)
                {
                    soma += matriz[x][y];#include <iostream>

int main ()
{
    int lin, col;

    std::cin >> lin >> col;

    int matriz[lin][col];

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    if (lin % 2 !=0 && col % 2 != 0)
    {
        lin = lin - 1;
        col = col - 1;
    }
    
    int linredu = lin / 2;
    int colredu = col / 2;
    int nmatriz[linredu][colredu];

    int soma;
    
    for (int i = 0; i < linredu; i++)
    {
        for (int j = 0; j < colredu; j++)
        {
            soma = 0;

            for (int x = i * 2; x < (i * 2) + 2 && x < lin; x++)
            {
                for (int y = j * 2; y < (j*2) + 2 && y < col; y++)
                {
                    soma += matriz[x][y]
                }
            }

            nmatriz[i][j] = soma / 4;
        }
    }

    for (int i = 0; i < linredu; i++)
    {
        for (int j = 0; j < colredu; j++)
        {
            std::cout << nmatriz[i][j] << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
                }
            }

            nmatriz[i][j] = soma / 4;
        }
    }

    for (int i = 0; i < linredu; i++)
    {
        for (int j = 0; j < colredu; j++)
        {
            std::cout << nmatriz[i][j] << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}