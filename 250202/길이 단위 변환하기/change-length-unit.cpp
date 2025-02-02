#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    double ft = 30.48;
    double mi = 160934;

    cout.precision(1);
    cout << "9.2ft = " << ft * 9.2 << "cm" << endl;
    cout << "1.3mi = " << mi * 1.3 << "cm" << endl;

    return 0;
}