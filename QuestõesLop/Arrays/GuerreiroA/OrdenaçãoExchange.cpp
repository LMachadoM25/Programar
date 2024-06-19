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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                int guarda = array[i];
                array[i] = array [j];
                array[j] = guarda;
            }
        }
        for (int k = 0; k < n; k++)
        {
            std::cout << array[k] << " ";
        }
        
        std::cout << std::endl;

    }
    return 0;
}