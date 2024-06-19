#include <iostream>
using namespace std;

int main () {
    int a, m, d;
    
    cin >> d;

    a = 0;
    m = 0;
    
    a += d / 365; 
    d = d % 365;

    m += d / 30;
    d = d % 30;     


    cout << a << " Ano(s)\n" << m << " Mês(es)\n" << d << " Dia(s)\n" << endl;


    return 0;
} 