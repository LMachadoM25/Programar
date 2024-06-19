#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        for (int e = 1; e <= i; e++)
        {
            cout << e * i << " ";
        }
        cout << endl;

    }

    return 0;
    
}

