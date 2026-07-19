#include <iostream> // 55분 시작
#include <vector>
#include <algorithm> // 57분 이해 완료
using namespace std;

int main() {
    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<int> v(n);

    for (int& x : v) {
        cin >> x;
    }

    m = 2 * m + 1;

    int cnt = 0;

    int i = 0;
    while(i < n) {
        if (v[i] == 1) {
            i += m;
            cnt++;
        }
        else {
            i++;
        }
    }

    cout << cnt;
    // Please write your code here.
    return 0;
} // 59분 완료