#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int aliquot = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                aliquot++;
            }
        }
        if (aliquot == 2) {
            cout << i << " ";
        }
    }

    return 0;
}