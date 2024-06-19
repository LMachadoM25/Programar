#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int  n;

    cin >> n;

    double matriz[n][2];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++){
            cin >> matriz[i][j];
        }
    }

   double bp;

    for (int i = 0; i < n; i++){
        bp += matriz[i][0];
    }

    bp /= 10;

    double total;

    for (int i = 0; i < n; i++){
        total += matriz[i][0];
    }

    cout << "Total: R$ " << total << endl;

    total -= bp;

    double vencedor;

    cin >> vencedor;

    double compartilhar = 0;

    for (int i = 0; i < n; i++){
        if (matriz[i][1] == vencedor){
            compartilhar += matriz[i][0];
        }
    }

    if (compartilhar == 0){
        for (int i = 0; i < n; i++){
            compartilhar += matriz[i][0];
        }
    }

    bool temvencedor = false;
    for (int i = 0; i < n; i++){
        if (matriz[i][1] == vencedor){
        temvencedor = true;
        }
    }

    if (temvencedor){
        for (int i = 0; i < n; i++){
            if (matriz[i][1] == vencedor){
            cout << "Apostador " << i + 1 << ": " << "R$ ";
            cout << trunc((matriz[i][0] / compartilhar) * total) << endl;
            }
        }
    }

    else{
        for (int i = 0; i < n; i++){
            cout << "Apostador " << i + 1 << ": " << "R$ ";
            cout << trunc((matriz[i][0] / compartilhar) * total) << endl;
        }
    }



    cout << "Bebidas e petiscos: R$ " << round(bp) << endl;

    return 0;

}