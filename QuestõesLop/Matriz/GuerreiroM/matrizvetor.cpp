#include <iostream>

int main ()
{
    int n;

    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int x, y;
    
    std::cin >> x >> y;
    
    int matriz[x][y];
    
    int k = 0;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            matriz[i][j] = arr[k++];
        }
    }

    int lin, col;
    std::cin >> lin >> col;

    std::cout << matriz[lin][col] << std::endl;

    return 0;
}