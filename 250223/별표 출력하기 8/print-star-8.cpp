#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            for (int j = 0; j <= i; j++) {
                cout << "* ";
            }
        }
        else {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}