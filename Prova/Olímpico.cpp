#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int p1o, p1p, p1b;
    int p2o, p2p, p2b;
    int p3o, p3p, p3b;
    int ouro, prata, bronze;

    p1o = p1p = p1b = 0;
    p2o = p2p = p2b = 0;
    p3o = p3p = p3b = 0;
    
    cin >> n;
    for (int x = 0; x < n; x++)
    {
        cin >> ouro, prata, bronze;
        
        switch (ouro) 
        {
            case 1:
                p1o++;
                break;

            case 2:
                p2o++;
                break;

            case 3:
                p3o++;
                break;
        }
        
        switch (prata)
        {
            case 1:
                p1p++;
                break;

            case 2:
                p2p++;
                break;

            case 3:
                p3p++;
                break;
        }

        switch (bronze)
        {
            case 1:
                p1b++;
                break;

            case 2:
                p2b++;
                break;

            case 3:
                p3b++;
                break;
        }

    }

    cout << "país 1: " << p1o << " ouros, ";
    cout << p1p << " pratas e " << p1b << "bronzes" << endl; 

    cout << "país 2: " << p2o << " ouros, ";
    cout << p2p << " pratas e " << p2b << "bronzes" << endl;

    cout << "país 3: " << p3o << " ouros, ";
    cout << p3p << " pratas e " << p3b << "bronzes" << endl;  
    
    return 0;
    
}