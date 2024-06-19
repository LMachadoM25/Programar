#include <iostream>

int main ()
{
    int n;
    std::cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    for (int k = 0; k < n; k++)
    {
        std::cout << array[k] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < n; i++)
    {
        bool mudar = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int guarda = array[j];
                array[j] = array [j + 1];
                array[j + 1] = guarda;
                mudar = true;
            }
        }
        
        if (!mudar)
        {
            break;
        }
        
        for (int k = 0; k < n; k++)
        {
            std::cout << array[k] << " ";
        }
        
        std::cout << std::endl;

    }
    return 0;
}