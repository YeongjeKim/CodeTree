#include <iostream>
using namespace std;

int main() {
    while(1) {
        int a;
        cin >> a;
        if (a > 25) {
            cout << "Lower" << endl;
        }
        else if (a < 25) {
            cout << "Higher" << endl;
        }
        else {
            cout << "Good" << endl;
            break;
        }
    }
    return 0;
}