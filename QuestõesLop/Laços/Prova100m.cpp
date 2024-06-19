#include <bits/stdc++.h>
using namespace std;

int main ()
{
    cout << fixed << setprecision(3);
    float q;
    int cont = 0, serie;
    cin >> q;
    for (int i = 0; 1 == 1; i++)
    {
        float j;
        cin >> j;
        if (j < 0)
        {
            break;
        }
        if (j <= q)
        {
            cont++;
        }
    }
    if (cont > 0)
    {
        serie = (cont -1 ) / 8 + 1;
    }
    cout << cont << " " << serie << endl;

    return 0;
}