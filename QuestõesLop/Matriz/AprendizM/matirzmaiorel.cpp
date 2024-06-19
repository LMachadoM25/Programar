#include <iostream>

int main ()
{
    int lin;
    int col;

    std::cin >> lin;
    std::cin >> col;

    int arr[lin][col];

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    char x;
    std::cin >> x;
    
    if (x == 'l')
    {
        int linha;
        std::cin >> linha;
        
        int maiorl = arr[linha][0];
                
        for (int j = 1; j < col; j++)
        {
            if (arr[linha][j] > maiorl)
            {
                maiorl = arr[linha][j];
            }
        }

        std::cout << maiorl << std::endl;  
    
    }

    else if (x == 'c')
    {
        int coluna;
        std::cin >> coluna;
        
        int maiorc = arr[0][coluna];
        
        for (int i = 1; i < lin; i++)
        {
            if (arr[i][coluna] > maiorc)
            {
                maiorc = arr[i][coluna];
            }   
        }

        std::cout << maiorc << std::endl;
    
    }
    
    return 0;

}