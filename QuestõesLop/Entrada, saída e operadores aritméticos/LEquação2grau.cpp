#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double delta = b * b - 4 * a * c;

    if (delta >= 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);

        cout << fixed << setprecision(2) << x1;
        cout << fixed << setprecision(2) << " " << x2 << endl;
    } else {
        cout << "Não existe" << endl;
    }
    
    return 0;
}