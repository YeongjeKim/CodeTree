#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < 10; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}