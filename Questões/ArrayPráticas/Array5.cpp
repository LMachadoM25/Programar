#include <iostream>

int main ()
{
    // Definir o valor de N
    int N;
    std::cin >> N;

    // Criar array para armazenar valores da sequência
    int sequencia [N];

    // Escolher valores da sequência
    for (int i = 0; i < N; i++)
    {
        std::cin >> sequencia[i];
    }

    // Criar array para contar a frequência de cada valor
    int frequencia [10] = { 0 };

    // Percorrer a sequência e contar a frequência de cada valor
    for (int i = 0; i < N; i++)
    {
        frequencia[sequencia[i] - 1]++;
    }

    // Imprimir a frequência de cada valor
    for (int i = 0; i < 10; i++)
    {
        std::cout << i+1 << ": " << frequencia[i] << std::endl;
    }


    return 0;

}
