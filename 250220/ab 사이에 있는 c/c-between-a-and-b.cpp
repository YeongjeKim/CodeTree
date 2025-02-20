#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool test = false;
    cin >> a >> b >> c;

    for(int i = a; i <= b; i++) {
        if (i % c == 0) {
            test = true;
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