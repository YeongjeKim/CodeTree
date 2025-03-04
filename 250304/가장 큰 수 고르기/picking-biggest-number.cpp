#include <iostream>
using namespace std;

int main() {
    int arr[10];
    
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    int max = arr[0];

    for (int i = 0; i < 10; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    cout << max << endl;

    return 0;
}