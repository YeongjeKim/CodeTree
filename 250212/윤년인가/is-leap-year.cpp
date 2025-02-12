#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;
    if (y % 100 == 0 && y % 400 != 0) {
        cout << "false" << endl;
    }
    else if (y % 4 == 0) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    return 0;
}