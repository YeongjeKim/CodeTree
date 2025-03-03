#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, m;
    cin >> n >> m;

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == m) {
            cnt++;
        }
    }

    cout << cnt << endl;
    
    return 0;
}