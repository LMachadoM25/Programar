#include <iostream>

int main ()
{
    int lin;
    int col;

    std::cin >> lin;
    std::cin >> col;

    int arr[lin][col];

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    int x;
    std::cin >> x;

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col;j++)
        {
            if (arr[i][j] == x)
            {
                std::cout << "Matriz tem elemento " << x << std::endl;
                return 0;
            }
        }
    }

    std::cout << "Matriz não tem elemento " << x << std::endl;

    return 0;
}