#include <iostream>
using namespace std;

int main() {
    int N, D, A;
    // N: N° de posições, D: Posição do Disco Voador, A: Posição do Avião
    unsigned int dist;

    cin >> N >> D >> A;

    dist = (D + N - A) % N;
    
    cout << dist << endl;
    

    return 0;
    

    }

