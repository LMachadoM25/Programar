#include <iostream>

int main()
{
    int timeA[10];
    int timeB[10];
    double lugarA[10];
    double lugarB[10];

    for (int i = 0; i < 10; i++)
    {
        std::cin >> timeA[i];
    }

    for (int i = 0; i < 10; i++)
    {
        std::cin >> timeB[i];
    }

    for (int i = 0; i < 10; i++)
    {
        std::cin >> lugarA[i];
    }

    for (int i = 0; i < 10; i++)
    {
        std::cin >> lugarB[i];
    }

    // Inicializando as variáveis de posição máxima e mínima
    double menorposicaoA = lugarA[0];
    double maiorposicaoB = lugarB[0];

    // Verificando impedimentos
    bool impedimentoA = false;
    bool impedimentoB = false;

    for (int i = 0; i < 10; i++)
    {
        if (lugarB[i] > maiorposicaoB)
        {
            maiorposicaoB = lugarB[i];
        }

        if (lugarA[i] < menorposicaoA)
        {
            menorposicaoA = lugarA[i];
        }
    }

    std::cout << "A: ";
    
    for (int i = 0; i < 10; i++)
    {
        if (maiorposicaoB < 0)
        {
            break;
        }
        
        if (lugarA[i] > maiorposicaoB)
        {
            std::cout << timeA[i] << " ";
            impedimentoA = true;
        }
        
    }

    if (!impedimentoA)
    {
        std::cout << "sem impedimentos";
    }
    
    std::cout << std::endl;

    std::cout << "B: ";

    for (int i = 0; i < 10; i++)
    {
        if (lugarB[i] < menorposicaoA)
        {
            std::cout << timeB[i] << " ";
            impedimentoB = true;
        }
    }

    if (!impedimentoB)
    {
        std::cout << "sem impedimentos" << std::endl;
    }

    return 0;
}