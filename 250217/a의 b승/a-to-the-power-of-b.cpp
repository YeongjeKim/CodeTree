#include <iostream>
using namespace std;

int main() {
    int a, b;
    int prob = 1;
    cin >> a >> b;

    for (int i = 1; i <= b; i++) {
        prob *= a;
    }
    cout << prob << endl;
    
    return 0;
}