#include <iostream>
using namespace std; 

int main() 
{
    int n;
    cin >> n;

    for (int i = 0; 1 < n; i++)
    {
        int pot = 1;
        for (j = 0; j < i; j++)
        {
            pot = pot * 2;
        }
        
        cout << pot << " ";

    }

    return 0;

}