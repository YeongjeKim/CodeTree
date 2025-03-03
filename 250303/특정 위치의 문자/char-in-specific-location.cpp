#include <iostream>
using namespace std;

int main() {
    char word[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char test;
    cin >> test;

    int idx = -1;

    for (int i = 0; i < 6; i++) {
        if (word[i] == test) {
            idx = i;
        }
    }

    if (idx == -1) {
        cout << "None" << endl;
    }
    else {
        cout << idx;
    }
    
    return 0;
}