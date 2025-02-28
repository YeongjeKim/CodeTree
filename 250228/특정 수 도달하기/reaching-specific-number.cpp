#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;
    int j = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    while (arr[j] < 250) {
        sum += arr[j];
        j++;
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << double(sum) / j << endl;

    return 0;
}