#include <iostream>

int main ()
{
    int n, dif;

    std::cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    bool sinal = false;
    
    for (int i = 0; i < n - 1; i++)
    {
        dif = array[i + 1] - array[i];

        if ((dif % 2 == 1) || (dif % 2 == -1))
        {
            sinal = true;
            // std::cout << dif << std::endl; (cout de debug)
        }

    }

    if (sinal == true)
    {
        std::cout << "Chato" << std::endl;
    }

    else 
    {
        std::cout << "Legal" << std::endl;
    }

    return 0;
    
}