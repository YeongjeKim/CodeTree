#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    cout << sum;
    return 0;
}