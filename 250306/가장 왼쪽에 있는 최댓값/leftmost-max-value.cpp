#include <iostream>

using namespace std;

int n;
int arr[1000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int limit = n;
    while (true) {
        int maxValue = -1, maxIndex = -1;

        for (int i = 0; i < limit; i++) {
            if (arr[i] > maxValue) {
                maxValue = arr[i];
                maxIndex = i;
            }
        }

        cout << maxIndex + 1 << " ";
        limit = maxIndex;

        if (maxIndex == 0) break;
    } 
    

    return 0;
}
