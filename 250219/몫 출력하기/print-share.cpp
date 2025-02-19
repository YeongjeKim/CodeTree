#include <iostream>
using namespace std;

int main() {
    int a;
    int count = 0;
    while(1) {
        cin >> a;
        if (a % 2 == 0) {
            cout << a / 2 << endl;
            count++;
        }
        else {
            continue;
        }
        
        if(count == 3) {
            break;
        }
    }
    return 0;
}