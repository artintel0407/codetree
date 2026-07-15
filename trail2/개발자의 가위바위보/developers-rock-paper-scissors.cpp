#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        if (a == b) continue;
        if ((a + 1) % 3 == b % 3) {
            
            cnt1++;
        }
        else cnt2++;
    }

    cout << max(cnt1, cnt2);
    // Please write your code here.
    return 0;
}