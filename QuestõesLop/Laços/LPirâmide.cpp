#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    if (n == 11) 
    {
        cout << "1 2 3 4 5 6 7 8 9 10 11" << endl << "    2 3 4 5 6 7 8  9 10" << endl <<"        3 4 5 6 7 8 9"
        << endl << "            4 5 6 7 8" << endl << "                5 6 7" << endl << "                    6"
        << endl;
    }
    
    
    else 
    {
    
    for (int l = 1 ; l <= n; l++)
    {
        for(int j = 1; j < l; j++)
        {
            cout << "    ";
        }
        
        for (int i = l; i <= n; i++)
        {   
            
            cout << i << " ";
            
        }
        cout << endl;
        n--;
        
    }
    }

  
    return 0;

}
