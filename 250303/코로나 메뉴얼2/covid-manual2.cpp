#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0, d = 0;
    char arr1[3];
    int arr2[3];

    for (int i = 0; i < 3; i++) {
        cin >> arr1[i] >> arr2[i];
    }

    for (int i = 0; i < 3; i++) {
        if (arr1[i] == 'Y') {
            if (arr2[i] >= 37) {
                a++;
            }
            else {
                c++;
            }
        }
        else {
            if (arr2[i] >= 37) {
                b++;
            }
            else {
                d++;
            }
        }
    }

    cout << a << " " << b << " " << c << " " << d << " ";
    if (a >= 2) {
        cout << 'E' << endl;
    }

    return 0;
}