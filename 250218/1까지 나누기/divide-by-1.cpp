#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int prod = n;
    for (int i = 1; i <= n; i++) {
        prod /= i;
        if (prod <= 1) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}