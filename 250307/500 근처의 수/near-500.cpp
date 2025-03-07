#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int small = arr[0], big = arr[0];
    for (int i = 0; i < 10; i++) {
        if (arr[i] < small) {
            small = arr[i];
        }
        if (arr[i] > big) {
            big = arr[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] < 500 && arr[i] > small) {
            small = arr[i];
        }
        if (arr[i] > 500 && arr[i] < big) {
            big = arr[i];
        }
    }

    cout << small << " " << big << endl;

    return 0;
}