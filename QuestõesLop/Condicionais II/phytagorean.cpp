#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
    int a, b, c, aq, bq, cq, hip;
    cin >> a >> b >> c;

    aq = a * a;
    bq = b * b;
    cq = c * c;
    
    if ((cq == aq + bq) || (bq == aq + cq) || (aq == bq + cq))
    {
        cout << "Pythagorean triple!" << endl;
    }
    
    
    else 
    {
        cout << "Not a Pythagorean triple!" << endl;
    }

    return 0;
    
}