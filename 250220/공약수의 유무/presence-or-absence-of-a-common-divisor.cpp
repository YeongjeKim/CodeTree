#include <iostream>
using namespace std;

int main() {
    int a, b;
    bool test = false;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (1920 % i == 0 && 2880 % i == 0) {
            test = true;
        }
    }

    cout << test << endl;

    return 0;
}