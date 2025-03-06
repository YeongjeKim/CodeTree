#include <iostream>

using namespace std;

int N;
int nums[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    int count[1001];
    for (int i = 0; i < 1001; i++) {
        count[i] = 0;
    }

    for (int i = 1; i < 1001; i++) {
        for (int j = 0; j < N; j++) {
            if (nums[j] == i) {
                count[i] += 1;
            }
        }
    }

    int big = -1;
    for(int i = 0; i < N; i++) {
        if(count[(nums[i])] == 1 && nums[i] > big) {
            big = nums[i];
        }
    }

    cout << big << endl;

    return 0;
}
