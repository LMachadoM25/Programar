#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string x, y;

    getline (cin, x);

    int m = x.size();

    for (int i = 0; i < m; i++)
    {
        cout << x[i];
    }

    cout << "|";

    for (int i = m - 1; i >= 0; i--)
    {
        cout << x[i];
    }

    cout << endl;

    return 0;
}