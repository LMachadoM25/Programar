#include <iostream>
using namespace std; 

int main() {
    int v; 

    cin >> v; 
    
    cout << v % 10;
    v = v / 10;
    cout << v % 10;
    v = v / 10;
    cout << v << endl;


    return 0;
}