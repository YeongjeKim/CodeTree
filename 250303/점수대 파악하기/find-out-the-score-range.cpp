#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int stop;

    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            stop = i;
            break;
        }
    }
    
    for (int i = 10; i > 0; i--) {
        int cnt = 0;
        for (int j = 0; j < stop; j++) {
            if(arr[j] / 10 == i) {
                // cout << arr[j] << " ";
                cnt++;
            }
        }
        // cout << endl;
        cout << i * 10 << " - " << cnt << endl;
    }

    return 0;
}