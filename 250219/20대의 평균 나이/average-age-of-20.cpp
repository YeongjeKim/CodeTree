#include <iostream>
using namespace std;

int main() {
    double sum = 0;
    int i = 0;
    int a;

    cout << fixed;

    while (1) {
        cin >> a;
        if (a >= 20 && a < 30) {
            sum += a;
        }
        else {
            cout.precision(2);
            cout << sum / i << endl;
            break;
        }
        i++;
    }

    return 0;
}