#include <iostream>
using namespace std;

int main() {
    int sum = 0, count = 0;
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            sum += i;
            count++;
        }
    }
    
    cout << fixed;
    double ave = double(sum) / count;
    cout.precision(1);

    cout << sum << " " << ave << endl;

    return 0;
}