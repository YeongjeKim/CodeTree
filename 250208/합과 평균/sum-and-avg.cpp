#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << fixed;
    cin >> a >> b;
    cout << a + b << " ";
    cout.precision(1);
    cout << (double)(a + b) / 2 << endl;
    return 0;
}