#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int arr[100][100];  // 최대 100x100 크기의 배열 선언
    int num = 1;  // 채워넣을 숫자
    
    for (int sum = 0; sum <= N + M - 2; sum++) {
        // if (sum % 2 == 0) {  
        //     // 짝수일 때: 아래에서 위로
        //     for (int r = min(sum, N - 1); r >= 0 && sum - r < M; r--) {
        //         int c = sum - r;
        //         arr[r][c] = num++;
        //     }
        // } else {  
            // 홀수일 때: 위에서 아래로
            for (int c = min(sum, M - 1); c >= 0 && sum - c < N; c--) {
                int r = sum - c;
                arr[r][c] = num++;
            }
        // }
    }

    // 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr[i][j];
            if (j < M - 1) cout << " ";  // 숫자 사이에 공백 추가
        }
        cout << "\n";
    }

    return 0;
}
