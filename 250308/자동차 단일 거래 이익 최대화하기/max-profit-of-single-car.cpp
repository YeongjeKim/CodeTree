#include <iostream>

using namespace std;

int main() {
    int n;
    int price[1000];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    // 무작정 최솟값을 구하면 안됨. 오른쪽에 더 큰 값이 있는 수만 적을 수 있음.
    int minValue = price[0];
    int minIndex = 0;
    bool possible = false;

    for (int i = 0; i < n; i++) {
        if (price[i] < minValue) {
            minValue = price[i];
            minIndex = i;
        }
        for (int j = i; j < n; j++) {
            if (price[j] < price[i]) {
                possible = true;
            }
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

    if (maxIndex == -1 || possible == false) {
        cout << 0 << endl;
    }
    else {
        cout << maxValue - minValue << endl;
    }

    return 0;
}
