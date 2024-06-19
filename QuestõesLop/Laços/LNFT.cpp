#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int n, x;
    cin >> n;

    for (int lin = 0; lin < n; lin++)
    {
        cin >> x;
        
        for (int col = 0; col < x; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
