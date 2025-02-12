#include <iostream>
using namespace std;

int main() {
    int a_age, b_age;
    char a_gender, b_gender;
    cin >> a_age >> a_gender >> b_age >> b_gender;
    cout << ((a_age >= 19 && a_gender == 'M') || (b_age >= 19 && b_gender == 'M')) << endl;
    return 0;
}