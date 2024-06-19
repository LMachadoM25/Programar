#include <iostream>
#include <iomanip>
#include <char>
using namespace std;

int main ()
{
    int n;
    double marca, nt = 0, somat = 0;
    cin >> n;

    for (int x = 0; x < n; x++)
    {
        double t;
        cin >> t;
        
        if (t >= 0)
        {
            somat += t;
            nt++;
        }
    }

    marca = somat / nt;
    
    if (marca >= 0)
    {
        cout << fixed << setprecision(2);
        cout << marca << endl;
    }

    else 
    { 
        cout << "A competicao nao possui dados historicos!" << endl;
    }

    return 0;

}
