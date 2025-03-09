#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[10];
    int sub = 100;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                if (arr[i] - arr[j] < sub) {
                    sub = arr[i] - arr[j];
                }
            }
            else {
                if (arr[j] - arr[i] < sub) {
                    sub = arr[j] - arr[i];
                }
            }
        }
    }

    cout << sub << endl;

    return 0;
}