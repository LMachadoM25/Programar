#include <iostream>

int main ()
{
    int n, pos;

    std::cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
        
        if (array[i] == 2)
        {
            pos = i;
        }
    }

    int esq = 0;
    for (int i = pos - 1; i >= 0; i--)
    {
        if (array[i] == 0)
        {
            esq++;
        }

        else
        {
            break;
        }
    }

    int dir = 0;
    for (int i = pos + 1; i < n; i++)
    {
        if (array[i] == 0)
        {
            dir++;
        }

        else 
        {
            break;
        }
    }

    std::cout << esq + dir << std::endl;

    return 0;
}