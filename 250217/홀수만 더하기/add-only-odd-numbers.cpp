#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 1 && a % 3 == 0) {
            sum += a;
        }
    }
    cout << sum << endl;
    return 0;
}