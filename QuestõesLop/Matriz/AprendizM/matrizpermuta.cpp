#include <iostream>

int main ()
{
    int n;

    std::cin >> n;

    int lin = n;
    int col = n;
    
    int arr[lin][col];

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col;j++)
        {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < lin; i++)
    {
        int contl = 0;
        
        for (int j = 0; j < col;j++)
        {
            if (arr[i][j] == 1)
            {
                contl++;
            }
        }

        if (contl > 1)
        {
            std::cout << "0" << std::endl;
            return 0;
        }

    }

    for (int i = 0; i < lin; i++)
    {
        int contc = 0;
        
        for (int j = 0; j < col;j++)
        {
            if(arr[j][i] == 1)
            {
                contc++;
            }

        }
        
        if (contc > 1)
        {
            std::cout << "0" << std::endl;
            return 0;
        }

    }

    std::cout << "1" << std::endl;

    return 0;
}