#include <iostream>

int main ()
{
    int lin, col;
    std::cin >> lin >> col;

    int arr[lin][col];

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    int x, y;
    std::cin >> x >> y;

    if ((x >= 1) && (x < lin) && (y >= 1) && (y < col)) //Só pra verificar se é possível
    {
        if (arr[x - 1][y - 1] == 0)
        {
            std::cout << "1" << std::endl;
        }

        else if ((arr[x - 1][y - 1] == 1) && (arr[x - 2][y - 1] != 1) && (arr[x][y - 1] != 1) && (arr[x - 1][y - 2] != 1) && (arr[x - 1][y - 0] != 1))
        {
            std::cout << "3" << std::endl;
        }

        else 
        {
            std::cout << "2" << std::endl;
        }
    }

    return 0;
}