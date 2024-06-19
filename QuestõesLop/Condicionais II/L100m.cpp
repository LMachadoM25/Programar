#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double ta, tb, tc, nc, menor;
    cin >> ta >> tb >> tc >> nc;
    cout << fixed << setprecision(1);

    
    if ((ta <= nc) || (ta <= tb) && (ta <= tc))
    {
        menor = ta;
    }
    else if ((tb <= nc) || (tb < ta) && (tb < tc))
    {
        menor = tb;
    }
    else if ((tc <= nc) || (tc < ta) && (tc < tb))
    {
        menor = tc;
    }
  

    
    if ((menor <= nc) && (menor <= tb) && (menor <= tc) && (menor <= ta)) 
    {
        cout << "Atleta aprovado com tempo " << menor << "s e nota de corte " << nc << "s" << endl; 
    } 
    else if ((menor > nc) && (menor > tb) && (menor > tc) && (menor > ta)) 
    {
        cout << "Atleta reprovado com tempo " << menor << "s e nota de corte " << nc << "s" << endl;
    }
    else
    {
        cout << "Atleta reprovado com tempo " << menor << "s e nota de corte " << nc << "s" << endl;
    }
    
    return 0;
}