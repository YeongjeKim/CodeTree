#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    double ft;
    cin >> ft;
    cout.precision(1);
    cout << ft * 30.48 << endl;
    return 0;
}