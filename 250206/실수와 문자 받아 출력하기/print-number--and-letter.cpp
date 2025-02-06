#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    char c;
    double a, b;

    cin >> c >> a >> b;
    cout.precision(2);
    cout << c << "\n" << a << "\n" << b << endl;
    return 0;
}