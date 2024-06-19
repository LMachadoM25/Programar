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

    int sfmolhado = 0;
    int sfseco = 0;
    
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 1)
            {
                if 
                ((i > 0 && arr[i - 1][j] == 2) ||
                (i < lin - 1 && arr[i + 1][j] == 2) ||
                (j > 0 && arr[i][j - 1] == 2) ||
                (j < col - 1 && arr[i][j + 1] == 2))
                {
                    sfmolhado++;
                }
                
                else
                {
                    sfseco++;
                }
            }
        }
    }

    std::cout << sfmolhado << " " << sfseco << std::endl;

    return 0;
}