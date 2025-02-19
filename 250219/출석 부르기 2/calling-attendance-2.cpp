#include <iostream>
using namespace std;

int main() {
    while(1) {
        int a;
        cin >> a;
        if (a == 1) {
            cout << "John" << endl;
        }
        else if (a == 2) {
            cout << "Tom" << endl;
        }
        else if (a == 3) {
            cout << "Paul" << endl;
        }
        else if (a == 4) {
            cout << "Sam" << endl;
        }
        else {
            cout << "Vacancy" << endl;
            break;
        }
    }
    return 0;
}