#include <iostream>

int main ()
{
    int n;

    std::cin >> n;

    int values [n];


    for (int i = 0; i < n; i++)
    {
        std::cin >> values [i];
    }

    bool igual = true;
     
    for (int i = 0; i < n / 2; i++)
    {
        if (values[i] != values[n -  1 - i])
        {
            igual = false;
            break;
        }
    }
        
        if (igual)
        {
            std::cout << "SIM" << std::endl;
        }

        else 
        {
            std::cout << "NÃO" << std::endl;
        }
        
    
    
    
    return 0;
}