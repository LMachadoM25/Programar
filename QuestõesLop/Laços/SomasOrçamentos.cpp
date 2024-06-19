#include <bits/stdc++.h>
using namespace std;

int main ()
{
    double x = 0, i = 0, soma = 0, quant = 0;
    
    while (true)
    {
        cin >> x >> i;
        if (x > 0)
        {
            soma += (i * x);
            quant += x;
            continue;
        }
        break;
    }

    cout << quant;
    cout << fixed << setprecision(2);
    cout << " " << soma;

    return 0;
}