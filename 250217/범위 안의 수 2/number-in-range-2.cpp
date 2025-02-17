#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int count = 0;

    for (int i = 0; i < 10; i++) {
        int a;
        cin >> a;
        if (a >= 0 && a <= 200) {
            sum += a;
            count++;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << double(sum) / count << endl;
    return 0;
}