#include <iostream>

int main ()
{
    int n, pos;

    std::cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
        
        if (array [i] == 2)
        {
            pos = i;
        }
    }

    int esq = 0;
    for (int i = 0; i < pos; i++)
    {
        if (array [i] == 1)
        {
            esq++;
        }
    }

    int dir = 0;
    for (int i = pos + 1; i < n; i++)
    {
        if (array [i] == 1)
        {
            dir++;
        }
    }

    if (esq < dir)
    {
        std::cout << "esquerda" << std::endl;
    }

    else if (esq > dir)
    {
        std::cout << "direita" << std::endl;
    }

    else
    {
        std::cout << "tanto faz" << std::endl;
    }

    return 0;
}