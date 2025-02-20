#include <iostream>
using namespace std;

int main() {
    bool test = true;
    int a;

    for (int i = 0; i < 5; i++) {
        cin >> a;
        if (a % 3 != 0) {
            test = false;
        }
    }

    cout << test << endl;

    return 0;
}