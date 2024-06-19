#include <bits/stdc++.h>
using namespace std;

int main () {
    int d1, d2, d3, d4; 
    int letra;
    
    cin >> d1 >> d2 >> d3 >> d4;
 
    letra = (d1 + d2 + d3 + d4) -1;
    if (letra == -1){ 
        cout << "Ei! Ninguém colocou nada!";
        }
    else {
        cout << "Letra: " << char(65 + (letra % 26)) << endl;
}
    return 0;
}