#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int last = 0;

    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] == -999 || arr[i] == 999) {
            last = i;
            break;
        }
    }

    int min = arr[0], max = arr[0];

    for (int i = 0; i < last; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << max << " " << min << endl;

    return 0;
}