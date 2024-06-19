#include <bits/stdc++.h>
using namespace std;

int main () { 
    int T, X, Y;
    cin >> T;

    if ((0 <= T) && (T < 5)) 
    {
        cout << "Iniciante" << endl;
    }
    
    else if ((5 <= T) && (T < 20))
    {
        cin >> X;
        if (X == 0){
            cout << "Iniciante" << endl;
        }
        if (X == 1){
            cout << "Intermediário" << endl;
        }
    }
    
    else 
    {
        (T >= 20);
        cin >> Y;
        if (Y == 0){
            cout << "Intermediário" << endl;
        }
        if (Y == 1){
            cout << "Avançado" << endl;
        }
         
    }

    return 0;
}