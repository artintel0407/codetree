#include <iostream> // 12분 시작
#include <vector>
#include <algorithm> // 19분 이해 완료
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 0, c = 0;

    int status = 6;

    int cnt = 0;
    int s;

    char x;
    for (int i = 0; i < n; i++) {
        cin >> x >> s;

        if (x == 'A') {
            a += s;
        }
        else if (x == 'B') {
            b += s;
        }
        else {
            c += s;
        }


        int cmp;
        if (a == b && b == c) cmp = 6;
        else if (a < c && b < c) cmp = 0;
        else if (a < b && c < b) cmp = 1;
        else if (a > b && a > c) cmp = 2;
        else if (a == b) cmp = 3;
        else if (b == c) cmp = 4;
        else if (c == a) cmp = 5;


        if (cmp != status) {
            cnt++;
            status = cmp;
        }

    }

    cout << cnt;
    // Please write your code here.
    return 0;
}