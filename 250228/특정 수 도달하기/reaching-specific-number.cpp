#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;
    int div = 1;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] >= 250) {
            div = i;
            break;
        }
        else {
            sum += arr[i];
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << double(sum) / div << endl;

    return 0;
}