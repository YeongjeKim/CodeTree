#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    int arr[100];
    int brr[100];

    // 수열 입력
    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> brr[i];
    }

    // B가 A의 부분연속수열인지 확인
    bool check = false;
    // for (int i = 0; i < n2; i++) {
        for (int j = 0; j < n1; j++) {
            if (arr[j] == brr[0]) {

                // 수열B의 크기가 수열A의 나머지 원소의 갯수보다 클 때 -> 틀림
                if (n1 - j < n2) {
                    break;
                }
                
                check = true;
                for (int k = 0; k < n2; k++) {
                    if (arr[j + k] != brr[k]) {
                        check = false;
                    }
                }
            }
        }
    // }

    // 결과 출력
    if (check == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}