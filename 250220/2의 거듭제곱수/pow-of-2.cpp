#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 1, a = 2;
    while(a != n) {
        x++;
        a *= 2;
    }
    cout << x << endl;
    return 0;
}