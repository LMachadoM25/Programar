#include <bits/stdc++.h>
using namespace std;

int main ()
{
    double A, B, C, D, E, F, G, H, I, J;
    
    cin >> A >> B >> C >> D >> E >> F >> G >> H >> I >> J;

    double soma = (A + B + C + D + E + F + G + H + I + J);

    double ma = (soma / 10);

    double mh = (10 / ((1/A) + (1/B) + (1/C) + (1/D) + (1/E) + (1/F) + (1/G) + (1/H) + (1/I) + (1/J)));

    double mg = pow ((A * B * C * D * E * F * G * H * I * J), (1.0/10.0));

    double eh = ((mh - ma) / (ma));

    double eg = ((mg - ma) / (ma));

    double em = (((eh + eg) / (2))) * 100;

    cout << fixed << setprecision (2);
    cout << "Média aritmética é " << ma << endl;
    cout << "Média harmônica é " << mh << endl;
    cout << "Média geométrica é " << mg << endl;
    cout << "Erro médio é " << em << " %" << endl;

    return 0;

}