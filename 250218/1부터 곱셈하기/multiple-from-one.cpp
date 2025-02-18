#include <iostream>
using namespace std;

int main() {
    int prod = 1;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        prod *= i;
        if (prod >= n) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}