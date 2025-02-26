#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i < 20; i++) {
        for (int j = 1; j < 20; j++) {
            cout << i << " * " << j << " = " << i * j;
            if (j % 2 == 0) {
                cout << endl;
            }
            else if (j != 19) {
                cout << " / ";
            }
        }
        cout << endl;
    }

    return 0;
}
