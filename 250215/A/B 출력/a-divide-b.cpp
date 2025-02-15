#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a / b << ".";
    int c = a % b;
    for (int i = 0; i < 20; i++) {
        cout << (c * 10) / b;
        c = (c * 10) % b;
    }
    return 0;
}