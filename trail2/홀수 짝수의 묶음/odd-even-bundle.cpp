#include <iostream> // 2분 시작
using namespace std; // 11분 이해 완료

int main() {
    int n;
    cin >> n;

    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 2 == 1) odd++;
        else even++;
    }
    
    int cnt = 0;

    // 29분 진짜 이해 완료

    if (odd < even) {
        cout << 2 * odd + 1;
    }
    else if (odd == even) {
        cout << odd * 2;
    }
    else {
        int res = 2 * even;
        int dif = odd - even;

        if (dif == 1) {
            if (res == 0) {
                cout << 1;
            }
            else {
                cout << res - 1;
            }
        }
        else {
            res += ((dif + 1) / 3) * 2 - 1;

            if (dif % 3 == 0) res++;

            cout << res;
        }


    }
   
    // Please write your code here.
    return 0;
} // 