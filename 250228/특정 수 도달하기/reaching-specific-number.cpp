#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;

    cout << fixed;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] >= 250) {
            cout.precision(1);
            cout << sum << " " << double(sum) / i << endl;
            break;
        }
        else {
            sum += arr[i];
        }
    }

    return 0;
}