#include <iostream>
using namespace std;

int main() {
    int three = 0, five = 0;
    for (int i = 0; i < 10; i++) {
        int a;
        cin >> a;
        if (a % 3 == 0) {
            three++;
        }
        if (a % 5 == 0) {
            five++;
        }
    }
    cout << three << " " << five << endl;
    return 0;
}