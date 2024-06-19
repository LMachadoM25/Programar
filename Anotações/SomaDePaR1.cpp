#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, i, s;
    cin >> n;

    i = 1;
    s = 0;
    while (i <= n) {
        s += i;
        i++;
    }

    cout << s << endl;

    return 0;
}