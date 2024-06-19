#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string x;

    getline (cin, x);

    if (x.size() != 8)
    {
        cout << "não" << endl;
        return 0;
    }

    for (size_t i = 0; i < 2; i++)
    {
        if ((isalpha(x[i])) && (isupper(x[i])))
        {
            continue;
        }

        else
        {
            cout << "não" << endl;
            return 0;
        }
    }

    if (x[3] != '-')
    {
        cout << "não" << endl;
        return 0;
    }
     

    for (size_t i = 4; i < 7; i++)
    {
        if (isalnum(x[i]))
        {
            continue;
        }

        else
        {
            cout << "não" << endl;
            return 0;
        }
    }

    cout << "sim" << endl;

    return 0;

}