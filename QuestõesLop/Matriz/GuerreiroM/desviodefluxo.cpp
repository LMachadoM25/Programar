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

    int x;
    std::cin >> x;
    
    int y = 0;
    
    while (y < col)
    {

        if (arr[y][x] == 1)
        {
            x--;
        }

        else if (arr[y][x] == 2)
        {
            x++;
        }

        if (x >= col || x < 0)
        {
            std::cout << "ops" << std::endl;
            return 0;
        }


        y++;
    }

    std::cout << x << std::endl;

    return 0;
}