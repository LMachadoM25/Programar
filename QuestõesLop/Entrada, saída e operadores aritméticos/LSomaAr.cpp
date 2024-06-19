#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    double a, b, soma;
    
    cin >> a >> b;
    soma = a + b;

    double c = trunc (soma * 100) / 100;
    
    cout << fixed << setprecision (2); 
    cout << c << endl; 

    return 0;
} 
