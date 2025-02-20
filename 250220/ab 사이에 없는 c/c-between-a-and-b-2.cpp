#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool test = true;

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            test = false;
        }
    }

    if (test == true) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}