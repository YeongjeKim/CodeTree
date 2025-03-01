#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum0 = 0;
    int sum1 = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i % 2 == 0) {
            sum0 += arr[i];
        }
        else {
            sum1 += arr[i];
        }
    }

    if (sum0 > sum1) {
        cout << sum0 - sum1 << endl;
    }
    else {
        cout << sum1 - sum0 << endl;
    }
    
    return 0;
}