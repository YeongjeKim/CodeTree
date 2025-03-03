#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int a, b;
    cin >> a >> b;

    int stop;
    for (int i = 0; i < 10; i++) {
        // cout << a << " / " << b << " = ";
        arr[i] = a % b;
        a /= b;
        // cout << a << " ... " << arr[i] << endl;
        if (a <= 1) {
            stop = i;
            break;
        }
    }

    int sum = 0;
    for (int i = 0; i < 4; i++) {
        int cnt = 0;
        for (int j = 0; j <= stop; j++) {
            if (arr[j] == i) {
                cnt++;
            }
        }
        sum += (cnt * cnt);
    }

    cout << sum << endl;

    return 0;
}