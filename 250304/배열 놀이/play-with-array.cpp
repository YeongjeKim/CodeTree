#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // 배열 입력
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 질의 입력
    for (int i = 0; i < q; i++) {
        int num, elem1, elem2;
        cin >> num;
        
        if (num == 1) {
            cin >> elem1;
            cout << arr[elem1 - 1] << endl;
        }

        else if (num == 2) {
            cin >> elem1;
            elem2 = -1;
            for (int j = 0; j < n; j++) {
                if (arr[j] == elem1) {
                    elem2 = j;
                    break;
                }
            }
            if (elem2 == -1) {
                cout << 0 << endl;
            }
            else {
                cout << elem2 + 1 << endl;
            }
        }

        else if (num == 3) {
            cin >> elem1 >> elem2;
            for (int j = elem1; j <= elem2; j++) {
                cout << arr[j - 1] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}