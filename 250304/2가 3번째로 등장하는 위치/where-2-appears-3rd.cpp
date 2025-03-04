#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    int num = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 2) {
            cnt++;
        }
        if (cnt == 3) {
            num = i;
            break;
        }
    }
    
    cout << num + 1 << endl;

    return 0;
}