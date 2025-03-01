#include <iostream>
using namespace std;

int main() {
    int arr[100];

    for (int i; i < 100; i++) {
        cin >> arr[i];
    }

    int stop;

    for (int i; i < 100; i++) {
        if (arr[i] == 0) {
            stop = i;
            break;
        }
    }

    cout << arr[stop - 3] + arr[stop - 2] + arr [stop - 1] << endl;

    return 0;
}