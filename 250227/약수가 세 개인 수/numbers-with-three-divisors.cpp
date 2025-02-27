#include <iostream>

using namespace std;

int start, end;

int main() {
    int start, end;
    cin >> start >> end;

    int cnt = 0;

    for (int i = start; i <= end; i++) {
        int aliquot = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                aliquot++;
            }
        }
        if (aliquot == 3) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
