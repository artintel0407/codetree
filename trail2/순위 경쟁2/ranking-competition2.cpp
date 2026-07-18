#include <iostream> //33분 시작
#include <vector>
#include <algorithm> // 36분 문제 이해 완료
using namespace std;

int main() {
    int n;
    cin >>  n;

    int status = 2; // 0 a, 1 b, 2 ab

    char c;
    int s;
    int cnt = 0;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        cin >> c >> s;
        if (c == 'A') {
            a += s;
        }
        else {
            b += s;
        }

        int cmp;
        if(a > b) cmp = 0;
        else if (a == b) cmp = 2;
        else cmp = 1;

        if (cmp != status) {
            cnt++;
            status = cmp;
        }
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}