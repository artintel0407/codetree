#include <iostream> // 42분 시작
#include <vector> // 47분 이해 완료
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min1 = 1000;
    int min2 = 1000;
    
    int min1_cnt = 0;
    int min2_cnt = 0;

    int min1_idx = -1;
    int min2_idx = -1;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x < min1) {
            min2 = min1; // 디버깅 후 추가
            min2_cnt = min1_cnt;
            min2_idx = min1_idx;

            min1 = x;
            min1_cnt = 1;
            min1_idx = i;

            
        }
        else if (x == min1) {
            min1_cnt++;
        }
        else if (x < min2) {
            min2 = x;
            min2_cnt = 1;
            min2_idx = i;
        }
        else if (x == min2) {
            min2_cnt++;
        }
    }


    if (min2_cnt == 1) {
        cout << min2_idx + 1;
    }
    else {
        cout << -1;
    }
    // Please write your code here.
    return 0;
}