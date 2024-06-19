#include <iostream>
using namespace std; 

int main() {
    int x, y, v;

    cin >> v; 

    x = v / 10;
    y = v % 10;

    cout << x << " " <<  y;

    return 0;
}