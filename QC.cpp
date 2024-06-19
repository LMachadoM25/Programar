#include <iostream>
using namespace std;

int main ()
{
    int N, M, K;

    cin >> N >> M >> K;

    int U, V, C;

    for (int i = 0; i < M; i++)
    {
        cin >> U >> V >> C;
    }

    int visitados = 0;

    for (int i = 0; i < M; i++)
    {            
        if (visitados = K)
        {
            cout << C;
            return 0;
        }
    }


}