#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    int seqA[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> seqA[i];
    }

    for (int i = 0; i < n; i++) // estrutura pra percorrer o array
    {
        int rep = -1; // faz isso pro código funcionar, pq vai comparar ele, com ele mesmo 
        int valor = seqA[i];

        for (int j = 0; j < n; j++) // comprarar ele com ele mesmo (checar número de repetições)
        {
            if (valor == seqA[j])
            {
                rep++;
            }
        }

        if (rep == 0)
        {
            std::cout << valor << std::endl;
        }
    }
    return 0;
}