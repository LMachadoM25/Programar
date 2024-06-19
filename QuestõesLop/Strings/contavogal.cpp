#include <iostream>
#include <string>
using namespace std;

int main ()
{
    const string vogais = "aeiouAEIOU";
    string x;

    getline (cin, x);

    int vezes = 0;

    for (char c : x)
    {
        if (vogais.find(c) != string::npos)
        {
            vezes++;
        }
    }

    if (vezes == 0)
    {
        cout << "Não possui vogais" << endl;
    }

    else 
    {
        cout << "Tem " << vezes << " vogais" << endl;
    }

    return 0;
    
}