#include <iostream>

int main ()
{
    int n, m;
    
    std::cin >> n >> m;

    int seqA[n], seqB[m];

    for (int i = 0; i < n; i++)
    {
        std::cin >> seqA[i];
    }
    
    for (int i = 0; i < m; i++)
    {
        std::cin >> seqB[i];
    }

    int tempmin = seqB[0];
 
    
    for (int i = 1; i < m; i++)
    {
        
        if (tempmin > seqB[i])
        {
            tempmin = seqB[i];
        }
    }

    int menorb = tempmin;
        
        
    for (int i = 0; i < n; i++)
    {
        if (seqA[i] < menorb)
        {
            std::cout << seqA[i] << std::endl;
        }
    }
    
    return 0;
}