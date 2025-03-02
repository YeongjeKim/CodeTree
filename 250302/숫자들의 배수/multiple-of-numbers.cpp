#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = n * (i + 1);
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 5 == 0) {
            cout << arr[i] << " ";

            for (int j = i + 1; j < 10; j++) {
                if (arr[j] % 5 == 0) {
                    cout << arr[j] << endl;
                    break;
                }
                else {
                    cout << arr[j] << " ";
                }
            }

            break;
        }
        else {
            cout << arr[i] << " ";
        }
    }

    return 0;
}