#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int n, a;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << double(sum) / n << endl;

    return 0;
}