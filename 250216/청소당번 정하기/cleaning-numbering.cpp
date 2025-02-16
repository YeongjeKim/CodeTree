#include <iostream>
using namespace std;

int main() {
    int room = 0, hall = 0, bath = 0;
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        if (i == 0) {}
        else if (i % 12 == 0) {
            bath++;
        }
        else if (i % 3 == 0) {
            hall++;
        }
        else if (i % 2 == 0) {
            room++;
        }
    }
    cout << room << " " << hall << " " << bath << endl;
    return 0;
}