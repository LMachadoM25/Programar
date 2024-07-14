//Usado em MCI
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int a, b, resultado;
    string x;
    
    cout << "mod ou multiplicação?" << endl;
    cin >> x;

    if (x == "x")
    {
        cout << "Insira os números a serem multiplicados" << endl;
        cin >> a >> b;

        resultado = a * b;

        cout << "Esse é o resultado:" << endl;
        cout << resultado << endl;
    }

    else if (x == "mod")
    {
        cout << "Insira o primeiro número:" << endl;
        cin >> a;

        cout << "mod de:" << endl;
        cin >> b;

        resultado = a % b;

        cout << "Esse é o resultado:" << endl;
        cout << resultado << endl;
    }

    else
    {
        cout << "Error!" << endl;
    }

    return 0;
}