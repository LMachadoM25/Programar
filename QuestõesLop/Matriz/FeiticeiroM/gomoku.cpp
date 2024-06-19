#include <iostream>

int main ()
{
    int arr[15][15];

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    //Verificar linhas
    for (int i = 0; i < 15; i++)
    {
        int jogo1a = 0;
        int jogo2a = 0;
        
        for (int j = 0; j < 15; j++)
        {
            if (arr[i][j] == 1)
            {
                jogo1a++; 
            }
            
            else
            {
                jogo1a = 0;
            }

            if (arr[i][j] == 2)
            {
                jogo2a++;
            }

            else
            {
                jogo2a = 0;
            }

            if (jogo1a >= 5)
            {
                std::cout << "1" << std::endl;
                return 0;
            }

            if (jogo2a >= 5)
            {
                std::cout << "2" << std::endl;
                return 0;
            }
        }
    }

    //Verificar colunas
    for (int i = 0; i < 15; i++)
    {
        int jogo1b = 0;
        int jogo2b = 0;
        
        for (int j = 0; j < 15; j++)
        {
            if (arr[j][i] == 1)
            {
                jogo1b++;
            }

            else 
            {
                jogo1b = 0;
            }

            if (arr[j][i] == 2)
            {
                jogo2b++;
            }

            else
            {
                jogo2b = 0;
            }

            if (jogo1b >= 5)
            {
                std::cout << "1" <<std::endl;
                return 0;
            }

            if (jogo2b >= 5)
            {
                std::cout << "2" <<std::endl;
                return 0;
            }

        }
    }

    //Verificar diagonal principal
    for (int i = 0; i <= 10; i++)
    {
        int jogo1c = 0;
        int jogo2c = 0;
        
        for (int j = 0; j <= 10; j++)
        {
            if (arr[i][j] == 1)
            {
                jogo1c++;
            }

            else
            {
                jogo1c = 0;
            }

            if (arr[i][j] == 2)
            {
                jogo2c++;
            }

            else
            {
                jogo2c = 0;
            }

            if (jogo1c >= 5)
            {
                std::cout << "1" << std::endl;
                return 0;
            }

            if (jogo2c >= 5)
            {
                std::cout << "2" << std::endl;
                return 0;
            }
        }
    }

    //Diagonal secundaria
    for (int i = 0; i <= 10; i++)
    {
        int jogo1d = 0;
        int jogo2d = 0;
        
        for (int j = 4; j < 15; j++)
        {
            if (arr[i][j] == 1)
            {
                jogo1d++;
            }

            else
            {
                jogo1d = 0;
            }

            if (arr[i][j] == 2)
            {
                jogo2d++;
            }

            else
            {
                jogo2d = 0;
            }

            if (jogo1d >= 5)
            {
                std::cout << "1" << std::endl;
                return 0;
            }

            if (jogo2d >= 5)
            {
                std::cout << "2" <<std::endl;
                return 0;
            }
        }
    }

    std::cout << "0" << std::endl;
    return 0;
}