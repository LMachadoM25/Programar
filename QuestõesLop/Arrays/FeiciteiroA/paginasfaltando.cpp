#include <iostream>

int main ()
{
    int nt, np; 

    std::cin >> nt;
    std::cin >> np;
    
    int arrA[nt];
    int arrB[np];
    int total = 0;
 
    //Elementos das páginas a serem desconsideradas
    for (int i = 0; i < np; i++)
    {
        std::cin >> arrB[i];
    }
    
    for (int i = 0; i < nt; i++)
    {
        arrA[i] = i + 1;
        bool achei = false;

        for (int j = 0; j < np; j++)
        {
            if (arrA[i] == arrB[j])
            {
                achei = true;
                break;
            }
        }

        if (!achei)
        {
            std::cout << arrA[i] << " ";
        }
    }

    std::cout << std::endl;
    
    return 0; 
}

