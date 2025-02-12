#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a < 90 || b < 90) {
        cout << 0 << endl;
    }
    else if ( b >= 95 ) {
        cout << 100000 << endl;
    }
    else {
        cout << 50000 << endl;
    }
    return 0;
}