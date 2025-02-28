#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[4];
    int cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> arr[j];
            sum += arr[j];
        }

        if (sum / 4 >= 60) {
            cout << "pass" << endl;
            cnt++;
        }
        else {
            cout << "fail" << endl;
        }
    }

    cout << cnt << endl;

    return 0;
}