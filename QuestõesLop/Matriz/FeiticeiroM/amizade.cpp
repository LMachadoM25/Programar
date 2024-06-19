#include <iostream>

int main ()
{
    int m;

    std::cin >> m;

    int amigos[m][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> amigos[i][j];
        }
    }

    int x;

    std::cin >> x;

    // usuários visitados
    bool visitados[m];
    for (int i = 0; i < m; i++)
    {
        visitados[i] = false;
    }

    int sugestoes[m];
    int numsugestoes = 0;

    // sugestão de amigos
    for (int i = 0; i < m; i++)
    {
        if ( i != x && !visitados[i] && amigos[x][i] == 0)
        {
            bool amigoemcomum = false;
            
            for (int j = 0; j < m; j++)
            {
                if (amigos[x][j] == 1 && amigos[i][j] == 1)
                {
                    amigoemcomum = true;
                    break;
                }
            }

            if (amigoemcomum)
            {
                sugestoes[numsugestoes] = i;
                numsugestoes++;
                visitados[i] = true;
            }
        }
    }

    for (int i = 0; i < numsugestoes; i++)
    {
        std::cout << sugestoes[i] << " ";
    }

    std::cout << std::endl;

    return 0;

}