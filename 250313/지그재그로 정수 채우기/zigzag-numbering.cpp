#include <iostream>

using namespace std;

int n, m;
int arr[100][100];

int main() {
    cin >> n >> m;

    int cnt = 0;

    for (int j = 0; j < m; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < n; i++) {
                arr[i][j] = cnt;
                cnt++;
            }
        }
        else {
            for (int i = n - 1; i >= 0; i--) {
                arr[i][j] = cnt;
                cnt++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
