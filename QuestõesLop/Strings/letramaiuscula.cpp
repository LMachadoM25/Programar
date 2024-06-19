#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main ()
{
    string x;
    
    getline (cin, x);

    bool novapalavra = true;

    for (size_t i = 0; i < x.size(); i++)
    {
        if(isalpha(x[i]))
        {
            if(novapalavra)
            {
                x[i] = toupper(x[i]);
                novapalavra = false;
            }

            else
            {
                x[i] = tolower(x[i]);
            }
        }

        else 
        {
            novapalavra = true;
        }
    }

    cout << x << endl;

    return 0;

}