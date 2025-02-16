#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 100 == 0 && i % 400 != 0) {}
        else if (i % 4 == 0) {
            count ++;
        }
    }
    cout << count << endl;

    return 0;
}