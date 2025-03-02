#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int a;
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 3 == 0) {
            a = arr[i-1];
            break;
        }
    }

    cout << a << endl;

    return 0;
}