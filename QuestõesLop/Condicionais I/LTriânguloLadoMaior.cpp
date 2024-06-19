#include <bits/stdc++.h>
using namespace std;

int main () {
    int L1, L2, L3;
    cin >> L1 >> L2 >> L3;

    if ((L1 < L2 + L3) && (L2 < L1 + L3) && (L3 < L1 + L2)){
        cout << "possivel" << endl;
    }
    else{
        cout << "impossivel" << endl;
    }
    
    return 0;

}
