#include <iostream>

int main ()
{
    int n;

    std::cin >> n;

    int arrayA[n];
    int arrayB[n];
    int arrayC[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arrayA[i];
    }

    for (int i = 0; i < n; i++)
    {
        std::cin >> arrayB[i];
    }

    for (int i = 0; i < n; i++)
    {
        std::cin >> arrayC[i];
    }

    int arrayD[n]; 
    
    for (int i = 0; i < n; i++)
    {
        arrayD[i] = {arrayA[i] + arrayB[i] + arrayC[i]}; 
        
        std::cout << arrayD[i] << " ";   
    }

    std::cout << std::endl;

    return 0;

}