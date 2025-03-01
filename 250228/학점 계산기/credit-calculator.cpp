#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0;
    double arr[5];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << fixed;
    cout.precision(1);
    cout << sum / n << endl;

    if (sum / n >= 4.0) {
        cout << "Perfect";
    }
    else if (sum / n >= 3.0) {
        cout << "Good";
    }
    else {
        cout << "Poor";
    }
    
    return 0;
}