#include <iostream>

int main ()
{
    int lin;
    int col;

    std::cin >> lin >> col;

    int arr[lin][col];

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    bool sim = true;
    
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                sim = false;
                break;   
            }
        }
    }

    if (sim)
    {
        std::cout << "Matriz Simétrica" << std::endl;
    }
    
    else
    {
        std::cout << "Matriz não Simétrica" << std::endl;
    }

    return 0;
}