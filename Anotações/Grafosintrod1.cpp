#include <iostream>
using namespace std;

int main() {
    int n, m;
    //n -> Quant. Vértices
    //m -> Quant. Arestas

    cin >> n >> m;
    bool matriz [n+1][n+1];
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            matriz [i][j] = false;
        
        }
    }

for(int i=0; i<m, i++) {
    int u, v;
    cin >> u >> v;
    matriz [u][v] = true;
    matriz [v][u] = true;

    //Grafo por Matiz = n²
    //Grafo por Lista de Adjacência = n * 2
}

}