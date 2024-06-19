#include <bits/stdc++.h>
using namespace std;

int main ()
{
    cout << fixed << setprecision(2);
    double xa, ya, za, xb, yb, zb, xc, yc, zc;
    cin >> xa >> ya >> za;
    cin >> xb >> yb >> zb;
    cin >> xc >> yc >> zc;

    double da = sqrt(pow(xa, (2)) + pow(ya, 2) + pow(za, 2));
    double db = sqrt(pow(xb, (2)) + pow(yb, 2) + pow(zb, 2));
    double dc = sqrt(pow(xc, (2)) + pow(yc, 2) + pow(zc, 2));

    if ((da <= db) && (da <= dc))
    {
        cout << da;
    }

    else if ((db < da) && (db <= dc))
    {
        cout << db;
    }

    else 
    {
        cout << dc;
    }

    return 0;

}