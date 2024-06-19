#include <iostream>
#include <algorithm>
#include <iomanip>

int main ()
{
    int n;

    std::cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
    
    int maior = array[0];
    int min = array[0];
    int duplicados = 0;
    
    for (int i = 0; i < n; i++)
    {
        maior = std::max (array[i], maior);
        min = std::min (array[i], min);

        if (array[i] == array [i+1])
        {
            duplicados++;
        }
    }
    
    if ((maior > n) || (array[0] == 0) || (min < 0) || (duplicados >= 1))
    {
        std::cout << "não" << std::endl;
    }
        
    else if (maior <= n)
    {
        std::cout << "sim" << std::endl;
            
    }

    return 0;

}