#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    while(1) {
        if (n == 1) {
            cout << count << endl;
            break;
        }
        if(n % 2 == 0) {
            n /= 2;
            count++;
        }
        else {
            n = n * 3 + 1;
            count++;
        }
    }
    return 0;
}