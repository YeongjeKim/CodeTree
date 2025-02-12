#include <iostream>
using namespace std;

int main() {
    char a_state, b_state, c_state;
    int a_temp, b_temp, c_temp;
    int patient = 0;
    
    cin >> a_state >> a_temp;
    if (a_state == 'Y' && a_temp >= 37) {
        patient += 1;
    }
    
    cin >> b_state >> b_temp;
    if (b_state == 'Y' && b_temp >= 37) {
        patient += 1;
    }

    cin >> c_state >> c_temp;
    if (c_state == 'Y' && c_temp >= 37) {
        patient += 1;
    }

    if (patient >= 2) {
        cout << "E" << endl;
    }
    else {
        cout << "N" << endl;
    }
    return 0;
}