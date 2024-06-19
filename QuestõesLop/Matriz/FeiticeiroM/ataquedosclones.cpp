#include <iostream>

int main ()
{
    int lin;
    int col;

    std::cin >> lin >> col;
    
    int matriz[lin][col];

    // Jedi coordenadas
    int xjedi, yjedi;
    std::cin >> xjedi >> yjedi;
    xjedi = xjedi - 1;
    yjedi = yjedi - 1;
    
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> matriz[i][j];
        }
    }

    // Bombas
    int colbomba; 
    int linbomba;

    int locais = 0;
    
    for (int i = 0; i < lin; i++)
    {   
        for (int j = 0; j < col; j++)
        {   
            if ((i == 0 or matriz[i][j] > matriz[i - 1][j]) &&
               (i == lin - 1 or matriz [i][j] > matriz[i + 1][j]) &&
               (j == 0 or matriz [i][j] > matriz[i][j - 1]) &&
               (j == col - 1 or matriz [i][j] > matriz[i][j + 1]) &&
               (i == lin - 1 or j == col - 1 or matriz [i][j] > matriz[i + 1][j + 1]) &&
               (i == lin - 1 or j == 0 or matriz [i][j] > matriz[i + 1][j - 1]) &&
               (i == 0 or j == col - 1 or matriz [i][j] > matriz[i - 1][j + 1]) &&
               (i == 0 or j == 0 or matriz [i][j] > matriz[i - 1][j - 1]))
            {
                        
                linbomba = i;
                colbomba = j;
                        
                std::cout << "Local " << locais + 1 << ": " << i + 1 << " " << j + 1 << std::endl;  
                        
                locais++;
                    
            }
        }
    }

    if 
    ((xjedi == 0 or matriz[xjedi][yjedi] > matriz[xjedi - 1][yjedi]) &&
    (xjedi == lin - 1 or matriz [xjedi][yjedi] > matriz[xjedi + 1][yjedi]) &&
    (yjedi == 0 or matriz [xjedi][yjedi] > matriz[xjedi][yjedi - 1]) &&
    (yjedi == col - 1 or matriz [xjedi][yjedi] > matriz[xjedi][yjedi + 1]) &&
    (xjedi == lin - 1 or yjedi == col - 1 or matriz [xjedi][yjedi] > matriz[xjedi + 1][yjedi + 1]) &&
    (xjedi == lin - 1 or yjedi == 0 or matriz [xjedi][yjedi] > matriz[xjedi + 1][yjedi - 1]) &&
    (xjedi == 0 or yjedi == col - 1 or matriz [xjedi][yjedi] > matriz[xjedi - 1][yjedi + 1]) &&
    (xjedi == 0 or yjedi == 0 or matriz [xjedi][yjedi] > matriz[xjedi - 1][yjedi - 1]))
    {
        std::cout << "Ao resgate!" << std::endl;
    }
    
    else
    {
        std::cout << "Descanse na Força..." << std::endl;
    }


    return 0;
}