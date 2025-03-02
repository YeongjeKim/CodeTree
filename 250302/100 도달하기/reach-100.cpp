#include <iostream>
using namespace std;

int main() {
    int arr[12];
    int n;
    cin >> n;

    arr[0] = 1;
    arr[1] = n;
    int stop;

    for (int i = 2; i < 12; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        if (arr[i] > 100) {
            stop = i;
            break;
        }
    }

    for (int i = 0; i <= stop; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}