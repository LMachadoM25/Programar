#include <iostream>

int main ()
{
    int v, pontos;
    std::cin >> v >> pontos;
    int arrx[v], arry[v];

    char ponto;

    for (int i = 0; i < v; i++)
    {
        std::cin >> arrx[i] >> arry[i];
    }

    for (int i = 0; i < pontos; i++)
    {
        int coordx, coordy;
        bool dentro = true;

        std::cin >> ponto >> coordx >> coordy;

        for (int j = 0; j < v - 1; j ++)
        {
            if (((arrx[j + 1] - arrx[j]) * (coordy - arry[j]) - (arry[j + 1] - arry[j]) * (coordx - arrx[j])) > 0)
            {
                dentro = false;
                break;
            }  
        }

        if (dentro)
        {
            std::cout << ponto << std::endl;
        }
    }

    return 0;
}