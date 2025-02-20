#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool test = true;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) test = false;
    }

    if (test == true) {
        cout << 'P' << endl;
    }
    else {
        cout << 'C' << endl;
    }

    return 0;
}