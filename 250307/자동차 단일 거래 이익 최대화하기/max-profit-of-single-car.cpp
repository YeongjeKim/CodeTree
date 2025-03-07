#include <iostream>

using namespace std;

int n;
int price[1000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    int minValue = price[0];
    int minIndex = 0;
    for (int i = 0; i < n; i++) {
        if (price[i] < minValue) {
            minValue = price[i];
            minIndex = i;
        }
    }

    int maxValue = -1;
    int maxIndex = -1;
    for (int i = minIndex; i < n; i++) {
        if (price[i] > minValue && price[i] > maxValue) {
            maxValue = price[i];
            maxIndex = i;
        }
    }

    if (maxIndex == -1) {
        cout << 0 << endl;
    }
    else {
        cout << maxValue - minValue << endl;
    }

    return 0;
}
