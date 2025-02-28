#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int stop = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            stop = i;
            break;
        }
    }
    if (stop == 0) {
        for (int i = 9; i >= 0; i--) {
            cout << arr[i] << " ";
        }
    }
    else {
        for (int i = stop - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}