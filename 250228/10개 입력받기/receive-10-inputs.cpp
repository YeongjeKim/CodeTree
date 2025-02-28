#include <iostream>
using namespace std;

int main() {
    int arr[10];
    
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int sum = 0, cnt = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == 0) break;
        sum += arr[i];
        cnt++;
    }

    double avg = double(sum) / cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg << endl;

    return 0;
}