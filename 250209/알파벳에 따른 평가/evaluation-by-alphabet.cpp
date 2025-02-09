#include <iostream>
using namespace std;

int main() {
    char score;
    cin >> score;
    if (score == 'S') {
        cout << "Superior" << endl;
    }
    else if (score == 'A') {
        cout << "Excellent" << endl;
    }
    else if (score == 'B') {
        cout << "Good" << endl;
    }
    else if (score == 'C') {
        cout << "Usually" << endl;
    }
    else if (score == 'D') {
        cout << "Effort" << endl;
    }
    else {
        cout << "Failure" << endl;
    }
    return 0;
}