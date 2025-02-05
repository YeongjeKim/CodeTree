#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    double a, b, c;
    cin >> a >> b >> c;
    cout.precision(3);
    cout << a << "\n" << b << "\n" << c << endl;
    return 0;
}