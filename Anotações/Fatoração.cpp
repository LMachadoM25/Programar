#include <bits/stdc++.h>
using namespace std;

int main ()
{
    double n, fat = 1;

    cin >> n;
    while (n > 0)
    {
        fat = fat * n;
        n--;
    }
    cout << fat << endl;

    return 0;

}