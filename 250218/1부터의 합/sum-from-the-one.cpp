#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int n;
    cin >> n;

    for (int i = 1; i <= 100; i++) {
        sum += i;
        if (sum >= n) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}