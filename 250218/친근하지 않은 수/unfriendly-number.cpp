#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            continue;
        }
        if (i % 3 == 0) {
            continue;
        }
        if (i % 5 == 0) {
            continue;
        }
        count++;
    }

    cout << count << endl;
    return 0;
}