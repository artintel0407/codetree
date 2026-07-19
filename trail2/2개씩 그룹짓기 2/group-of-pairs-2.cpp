#include <iostream> // 24분 시작
#include <vector> // 25분 이해 > 잘못된 이해
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(2 * n);

    for (int& x : v) {
        cin >> x;
    }

    sort(v.begin(), v.end());

    int mn = INT_MAX;

    for (int i = 0; i < n; i++) {
        mn = min(mn, v[n + i] - v[i]);
    }

    cout << mn;
    // Please write your code here.
    return 0;
}