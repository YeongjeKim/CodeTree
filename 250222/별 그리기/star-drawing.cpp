#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 절반 상단 부분
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // 절반 하단 부분
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int j = 2 * n - 1; j > 2 * i; j--) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}