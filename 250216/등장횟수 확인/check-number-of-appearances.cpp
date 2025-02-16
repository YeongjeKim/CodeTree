#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 0; i < 5; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}