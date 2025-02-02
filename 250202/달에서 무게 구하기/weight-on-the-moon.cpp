#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int weight = 13;
    double moon = weight * 0.165;

    cout.precision(6);
    cout << weight << " * 0.165000 = " << moon << endl;

    return 0;
}