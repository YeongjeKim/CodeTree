#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int n;
    cin >> n;
    for (int i = n; i <= 100; i++) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}