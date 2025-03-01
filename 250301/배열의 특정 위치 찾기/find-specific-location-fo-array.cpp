#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum2 = 0;
    double sum3 = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i % 2 != 0) {
            sum2 += arr[i];
        }
        if (i == 2 || i == 5 || i == 8) {
            sum3 += arr[i];
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << sum2 << " " << sum3 / 3 << endl;

    return 0;
}