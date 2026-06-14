#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int mx = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;

        int bound = v[i] + k;

        for (int j = i; j < n; j++) {
            if (v[j] <= bound) {
                cnt++;
            }
        }
        mx = max(cnt, mx);
    }

    cout << mx;

    // Please write your code here.
    return 0;
}