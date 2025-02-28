#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;
    int stop = 0;
    
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] == 0) {
            stop = i;
            break;
        }
    }

    int j = 0;
    while (j != stop) {
        sum += arr[j];
        j++;
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << double(sum) / stop << endl;
    return 0;
}