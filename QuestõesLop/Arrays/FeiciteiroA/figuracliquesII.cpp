#include <iostream>
using namespace std;

int main() 
{
    int n, m;
    char ponto;

    cin >> n >> m;

    int arrx[n], arry[n];

    for (int i = 0; i < n; i++) 
    {
        cin >> arrx[i] >> arry[i];
    }

    for (int i = 0; i < m; i++) 
    {
        int toca = 0;
        int coordx, coordy;
        cin >> ponto >> coordx >> coordy;

        for (int j = 0; j < n; j++) 
        {
            int next = (j + 1) % n; // Índice do próximo ponto no polígono (considerando que o último ponto se conecta ao primeiro)

            // Verifica se a linha horizontal passando por coordy cruza o segmento de reta arry[j] -> arry[next]
            if ((arry[j] < coordy && arry[next] >= coordy) || (arry[next] < coordy && arry[j] >= coordy)) 
            {
                // Calcula a coordenada x da interseção da linha horizontal com o segmento de reta
                int intersecaoX = arrx[j] + (coordy - arry[j]) * (arrx[next] - arrx[j]) / (arry[next] - arry[j]);

                // Se a coordenada x da interseção é maior do que a coordenada x do ponto, incrementa o contador de cruzamentos
                if (intersecaoX > coordx) 
                {
                    toca++;
                }
            }
        }

        // Se o número de cruzamentos for ímpar, o ponto está dentro do polígono
        if (toca % 2 != 0) 
        {
            cout << ponto << endl;
        }
    }

    return 0;
}