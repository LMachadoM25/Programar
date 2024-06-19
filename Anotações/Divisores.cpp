#include <iostream>
using namespace std; 

int main() 
{
    int n, d, r;
    cin >> n;

    d = 1;
    while (d <= n) 
    {
        if (n % d == 0)
        {
            cout << d << endl;
        }
        d++;
    }

    return  0;

}