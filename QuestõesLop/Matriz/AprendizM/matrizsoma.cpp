#include <iostream>

int main ()
{
    int lin, col;

    std::cin >> lin >> col;

    int arrA[lin][col];
    int arrB[lin][col];



    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> arrA[i][j];
        }
    }

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> arrB[i][j];
        }
    }

    for (int i = 0; i < lin; i++)
    {
        
        for (int j = 0; j < col; j++)
        {
            std::cout << arrA[i][j] + arrB[i][j] << " ";
        }

        std::cout << std::endl;
    }
    
    return 0;
}