#include <iostream>
using namespace std;

int main() {
    int n;
    bool test = false;
    cin >> n;

    for(int i = 2; i < n; i++) {
        if (n % i == 0) {
            test = true;
        }
    }

    if (test == true) {
        cout << "C" << endl;
    }
    else {
        cout << "N" << endl;
    }

    return 0;
}