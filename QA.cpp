#include <iostream>
using namespace std;;

int main ()
{
    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == 1)
        {
            v1++;
        }

        else if (arr[i] == 2)
        {
            v2++;
        }
        
        else if (arr[i] == 3)
        {
            v3++;
        }
    }

    if (v1 == 0)
    {
        cout << 1;
    }

    else if (v2 == 0)
    {
        cout << 2;
    }

    else if (v3 == 0)
    {
        cout << 3;
    }

    else 
    {
        cout << 0;
    }

    return 0;
}