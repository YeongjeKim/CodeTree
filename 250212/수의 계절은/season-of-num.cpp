#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    if ( m <= 2 || m == 12) {
        cout << "Winter" << endl;
    }
    else if ( m <= 5 ) {
        cout << "Spring" << endl;
    }
    else if ( m <= 8 ) {
        cout << "Summer" << endl;
    }
    else {
        cout << "Fall" << endl;
    }
    return 0;
}