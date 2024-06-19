#include <iostream>
using namespace std;

int main ()
{
    string x, y;

    getline (cin, x);
    getline (cin, y);

    int m = x.size();
    int n = y.size();

    for (int i = 0; i < max(m, n); i++)
    {
        if (i < m)
        {
            cout << x[i];
        }
        
        if (i < n)
        {
            cout << y[i];
        }
    }

    cout << endl;

    return 0;
}