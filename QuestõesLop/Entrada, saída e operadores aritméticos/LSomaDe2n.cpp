#include <bits/stdc++.h>
using namespace std;

int main () {
    int A, B, res;
    cin >> A >> B;
    
    if ((A % 2) != 0) {
        cout << "Não posso somar, pois " << A << " não é par" << endl;
    }
    if ((B % 2) != 0){
        cout << "Não posso somar, pois " << B << " não é par" << endl;
    }
    else {
        (res = A + B);
        cout << res << endl;
    }

    return 0;

}
