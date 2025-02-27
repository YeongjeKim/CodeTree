#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> n;
        int cnt = 0;
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
                cnt++;
            }
            else {
                n = n * 3 + 1;
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}