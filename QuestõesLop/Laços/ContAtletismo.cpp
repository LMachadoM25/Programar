#include <iostream>
using namespace std;

int main () 
{
    int n;
    int S = 0, C = 0, L = 0;

    cin >> n;

    for (int x = 0; x < n; x++)
    {
       while (true)
       {
        char q;
        cin >> q;
        
        if (q == 'S')
        {
            S++;
            continue;
        }

        if (q == 'C')
        {
            C++;
            continue;
        }

        if (q == 'L')
        {
            L++;
            continue;
        }

        if (q == 'F')
        {
            break;
        }
       }
    }

    cout << C << " " << S << " " << L << " " << C + S + L << endl;
    
    return 0;
}