#include <iostream>
using namespace std;

int main ()
{
    int n;
    char x;
    cin >> n >> x;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (j == i || j == n - i - 2)
            {
                cout << x;
            }
            else 
            {
                cout << ' ';
            }
        }
        
        cout << endl;

    }


}